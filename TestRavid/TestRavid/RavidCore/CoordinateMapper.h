#pragma once

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalCoordinateMapper;
		class AFX_EXT_CLASS CCoordinateMapper : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CCoordinateMapper);

		public:
			CCoordinateMapper();
			virtual ~CCoordinateMapper();

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

			
			EAlgorithmResult Convert(_Inout_ CRavidPoint<double>& rpPoint);
			EAlgorithmResult Convert(_Inout_ CRavidPoint<double>* pRpPoint);
			EAlgorithmResult Convert(_In_ CRavidPoint<int>& rpSource, _Out_ CRavidPoint<double>& rpTarget);
			EAlgorithmResult Convert(_In_ CRavidPoint<int>* pRpSource, _Out_ CRavidPoint<double>* pRpTarget);
			EAlgorithmResult Convert(_Inout_ CRavidPoint<long long>& rpSource);
			EAlgorithmResult Convert(_Inout_ CRavidPoint<long long>* pRpSource);
			EAlgorithmResult Convert(_In_ CRavidPoint<long long>& rpSource, _Out_ CRavidPoint<double>& rpTarget);
			EAlgorithmResult Convert(_In_ CRavidPoint<long long>* pRpSource, _Out_ CRavidPoint<double>* pRpTarget);
			EAlgorithmResult Convert(_In_ CRavidPoint<float>& rpSource, _Out_ CRavidPoint<double>& rpTarget);
			EAlgorithmResult Convert(_In_ CRavidPoint<float>* pRpSource, _Out_ CRavidPoint<double>* pRpTarget);
			EAlgorithmResult Convert(_In_ CRavidPoint<double>& rpSource, _Out_ CRavidPoint<double>& rpTarget);
			EAlgorithmResult Convert(_In_ CRavidPoint<double>* pRpSource, _Out_ CRavidPoint<double>* pRpTarget);

		private:

			CInternalCoordinateMapper* m_pInternal = nullptr;
		};
	}
}
