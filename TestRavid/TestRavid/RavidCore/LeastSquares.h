#pragma once

#include <memory>
#include <vector>

namespace Ravid
{
	namespace Mathematics
	{
		class CInternalLeastSquares;

		class AFX_EXT_CLASS CLeastSquares : public CRavidObject
		{
		public:
			RavidPreventCopySelf(CLeastSquares);

			CLeastSquares();
			virtual ~CLeastSquares();

			bool Clear();


			bool SetData(_In_ CRavidGeometryArray* pData);

			bool SetData(_In_ std::vector<CRavidPoint<int> >* pData);
			bool SetData(_In_ std::vector<CRavidPoint<long long> >* pData);
			bool SetData(_In_ std::vector<CRavidPoint<float> >* pData);
			bool SetData(_In_ std::vector<CRavidPoint<double> >* pData);

			bool SetData(_In_ double* pDblX, _In_ double* pDblY, _In_ long nCount);

			bool SetData(_In_ CRavidPoint<int>* pData, _In_ long nCount);
			bool SetData(_In_ CRavidPoint<long long>* pData, _In_ long nCount);
			bool SetData(_In_ CRavidPoint<float>* pData, _In_ long nCount);
			bool SetData(_In_ CRavidPoint<double>* pData, _In_ long nCount);


			bool AddData(_In_ double dblX, _In_ double dblY);
			bool AddData(_In_ CRavidPoint<int>* pData);
			bool AddData(_In_ CRavidPoint<long long>* pData);
			bool AddData(_In_ CRavidPoint<float>* pData);
			bool AddData(_In_ CRavidPoint<double>* pData);


			bool GetLinear(_Out_ double& dblA, _Out_ double& dblB, _Out_ double& dblRSquare);
			bool GetLinear(_Out_ double* pDblA, _Out_ double* pDblB, _Out_ double* pDblRSquare);

			bool GetQuadratic(_Out_ double& dblA, _Out_ double& dblB, _Out_ double& dblC, _Out_ double& dblRSquare);
			bool GetQuadratic(_Out_ double* pDblA, _Out_ double* pDblB, _Out_ double* pDblC, _Out_ double* pDblRSquare);

			bool GetCubic(_Out_ double& dblA, _Out_ double& dblB, _Out_ double& dblC, _Out_ double& dblD, _Out_ double& dblRSquare);
			bool GetCubic(_Out_ double* pDblA, _Out_ double* pDblB, _Out_ double* pDblC, _Out_ double* pDblD, _Out_ double* pDblRSquare);

			bool GetQuartic(_Out_ double& dblA, _Out_ double& dblB, _Out_ double& dblC, _Out_ double& dblD, _Out_ double& dblE, _Out_ double& dblRSquare);
			bool GetQuartic(_Out_ double* pDblA, _Out_ double* pDblB, _Out_ double* pDblC, _Out_ double* pDblD, _Out_ double* pDblE, _Out_ double* pDblRSquare);

			bool GetNDegree(_In_ int nDegree, _Out_ std::vector<double>& vctResult, _Out_ double& dblRSquare);
			bool GetNDegree(_In_ int nDegree, _Out_ std::vector<double>* pVctResult, _Out_ double* pDblRSquare);

		private:
			std::unique_ptr<CInternalLeastSquares> m_pInternal;
		};
	}
}

