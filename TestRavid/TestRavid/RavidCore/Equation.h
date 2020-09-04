#pragma once

#include <complex>
#include <vector>
#include <type_traits>

namespace Ravid
{
	namespace Mathematics
	{
		class AFX_EXT_CLASS CEquation : public CRavidObject
		{
		public:
			RavidPreventCopySelf(CEquation);

			CEquation() = delete;
			virtual ~CEquation();

			static Ravid::Algorithms::EAlgorithmResult LinearEquation(_In_ std::complex<double> cpxA, _In_ std::complex<double> cpxB, _Out_ std::complex<double>* pResult);
			static Ravid::Algorithms::EAlgorithmResult QuadraticEquation(_In_ std::complex<double> cpxA, _In_ std::complex<double> cpxB, _In_ std::complex<double> cpxC, _Out_ std::vector<std::complex<double> >* pResult);
			static Ravid::Algorithms::EAlgorithmResult CubicEquation(_In_ std::complex<double> cpxA, _In_ std::complex<double> cpxB, _In_ std::complex<double> cpxC, _In_ std::complex<double> cpxD, _Out_ std::vector<std::complex<double> >* pResult);
			static Ravid::Algorithms::EAlgorithmResult QuarticEquation(_In_ std::complex<double> cpxA, _In_ std::complex<double> cpxB, _In_ std::complex<double> cpxC, _In_ std::complex<double> cpxD, _In_ std::complex<double> cpxE, _Out_ std::vector<std::complex<double> >* pResult);
			static Ravid::Algorithms::EAlgorithmResult NDegreeEquation(_In_ std::vector<double> vctCoef, _Out_ std::vector<double>* pResult);
			static Ravid::Algorithms::EAlgorithmResult NDegreeEquation(_In_ std::vector<std::complex<double> > vctCpx, _Out_ std::vector<std::complex<double> >* pResult);
		};
	}
}

