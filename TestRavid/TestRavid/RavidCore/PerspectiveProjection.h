#pragma once

namespace Ravid
{
	namespace Mathematics
	{
		class CMatrix;
	}

	namespace Algorithms
	{
		class CRavidImage;
		class CInternalPerspectiveProjection;
		class AFX_EXT_CLASS CPerspectiveProjection : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CPerspectiveProjection);

		public:
			CPerspectiveProjection();
			virtual ~CPerspectiveProjection();

			EAlgorithmResult Clear();

			CRavidQuadrangle<double>* GetSourceWorld();
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<int>& rqSourceWorld);
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<int>* pRqSourceWorld);
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<long long>& rqSourceWorld);
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<long long>* pRqSourceWorld);
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<float>& rqSourceWorld);
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<float>* pRqSourceWorld);
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<double>& rqSourceWorld);
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<double>* pRqSourceWorld);

			CRavidQuadrangle<double>* GetTargetWorld();
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<int>& rqTargetWorld);
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<int>* pRqTargetWorld);
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<long long>& rqTargetWorld);
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<long long>* pRqTargetWorld);
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<float>& rqTargetWorld);
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<float>* pRqTargetWorld);
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<double>& rqTargetWorld);
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<double>* pRqTargetWorld);

			Ravid::Mathematics::CMatrix GetMatrix();
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<int>& rqSourceWorld, _In_ CRavidQuadrangle<int>& rqTargetWorld);
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<int>* pRqSourceWorld, _In_ CRavidQuadrangle<int>* pRqTargetWorld);
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<long long>& rqSourceWorld, _In_ CRavidQuadrangle<long long>& rqTargetWorld);
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<long long>* pRqSourceWorld, _In_ CRavidQuadrangle<long long>* pRqTargetWorld);
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<float>& rqSourceWorld, _In_ CRavidQuadrangle<float>& rqTargetWorld);
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<float>* pRqSourceWorld, _In_ CRavidQuadrangle<float>* pRqTargetWorld);
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<double>& rqSourceWorld, _In_ CRavidQuadrangle<double>& rqTargetWorld);
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<double>* pRqSourceWorld, _In_ CRavidQuadrangle<double>* pRqTargetWorld);
			EAlgorithmResult Mapping();

			EAlgorithmResult ConvertCoordinate(_Inout_ CRavidPoint<double>& rpPoint);
			EAlgorithmResult ConvertCoordinate(_Inout_ CRavidPoint<double>* pRpPoint);
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<int>& rpSource, _Out_ CRavidPoint<double>& rpTarget);
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<int>* pRpSource, _Out_ CRavidPoint<double>* pRpTarget);
			EAlgorithmResult ConvertCoordinate(_Inout_ CRavidPoint<long long>& rpSource);
			EAlgorithmResult ConvertCoordinate(_Inout_ CRavidPoint<long long>* pRpSource);
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<long long>& rpSource, _Out_ CRavidPoint<double>& rpTarget);
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<long long>* pRpSource, _Out_ CRavidPoint<double>* pRpTarget);
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<float>& rpSource, _Out_ CRavidPoint<double>& rpTarget);
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<float>* pRpSource, _Out_ CRavidPoint<double>* pRpTarget);
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<double>& rpSource, _Out_ CRavidPoint<double>& rpTarget);
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<double>* pRpSource, _Out_ CRavidPoint<double>* pRpTarget);

			EAlgorithmResult ConvertImage(_In_ CRavidImage* pImgSrc, _Out_ CRavidImage* pImgDst);
			EAlgorithmResult ConvertImage_(_In_ CRavidImage* pImgSrc, _Out_ CRavidImage* pImgDst);

		private:
			CInternalPerspectiveProjection* m_pInternal = nullptr;
		};
	}
}
