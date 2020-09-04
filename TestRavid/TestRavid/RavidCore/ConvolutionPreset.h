#pragma once

namespace Ravid
{
	namespace Mathematics
	{
		class CMatrix;
	}

	namespace Algorithms
	{
		class AFX_EXT_CLASS CConvolutionPreset : public CRavidObject
		{
		public:
			enum EKernelType
			{
				EKernelType_Uniform3x3 = 0,
				EKernelType_Uniform5x5,
				EKernelType_Uniform7x7,
				EKernelType_UniformNxN,
				
				EKernelType_Gaussian3x3,
				EKernelType_Gaussian5x5,
				EKernelType_Gaussian7x7,
				EKernelType_GaussianNxN,

				EKernelType_Sharpen,

				EKernelType_LowPass1,
				EKernelType_LowPass2,
				EKernelType_LowPass3,

				EKernelType_HighPass1,
				EKernelType_HighPass2,

				EKernelType_GradientX,
				EKernelType_GradientY,

				EKernelType_SobelX,
				EKernelType_SobelY,

				EKernelType_PrewittX,
				EKernelType_PrewittY,

				EKernelType_LaplacianX,
				EKernelType_LaplacianY,

				EKernelType_Laplacian4,
				EKernelType_Laplacian8,

				EKernelType_CompassN,
				EKernelType_CompassNW,
				EKernelType_CompassW,
				EKernelType_CompassSW,
				EKernelType_CompassS,
				EKernelType_CompassSE,
				EKernelType_CompassE,
				EKernelType_CompassNE,
			};

			CConvolutionPreset();
			virtual ~CConvolutionPreset();

			EAlgorithmResult GetKernel(_In_ EKernelType eKT, _Out_ Ravid::Mathematics::CMatrix& m, _In_opt_ int nRow = 3, _In_opt_ int nCol = 3);
		};
	}
}

