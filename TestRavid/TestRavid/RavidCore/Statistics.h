#pragma once

#include <vector>

namespace Ravid
{
	using namespace Algorithms;

	namespace Mathematics
	{
		class AFX_EXT_CLASS CStatistics : public CRavidObject
		{
			//RavidUseDynamicCreation(this);
			RavidPreventCopySelf(CStatistics);

		public:
			CStatistics() = delete;

			static EAlgorithmResult GetMin(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetMin(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetMin(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetMin(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetMin(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetMin(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetMin(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetMin(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetMin(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetMin(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			static EAlgorithmResult GetMin(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetMin(_In_ std::vector<double>& vctData, _Out_ double &OutputData);

			static EAlgorithmResult GetMax(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetMax(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetMax(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetMax(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetMax(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetMax(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetMax(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetMax(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetMax(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetMax(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			static EAlgorithmResult GetMax(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetMax(_In_ std::vector<double>& vctData, _Out_ double &OutputData);

			static EAlgorithmResult GetMedian(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetMedian(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetMedian(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetMedian(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetMedian(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetMedian(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetMedian(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetMedian(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetMedian(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetMedian(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			static EAlgorithmResult GetMedian(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetMedian(_In_ std::vector<double>& vctData, _Out_ double &OutputData);

			static EAlgorithmResult GetVariance(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetVariance(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetVariance(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetVariance(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetVariance(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetVariance(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetVariance(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetVariance(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetVariance(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetVariance(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			static EAlgorithmResult GetVariance(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetVariance(_In_ std::vector<double>& vctData, _Out_ double &OutputData);

			static EAlgorithmResult GetStandardDeviation(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<double>& vctData, _Out_ double &OutputData);

		};
	}
}