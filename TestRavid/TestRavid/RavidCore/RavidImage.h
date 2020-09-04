#pragma once

#include "MultipleVariable.h"
#include "MultipleCondition.h"

#include <vector>
#include <complex>

class CRavidGeometry;

namespace Ravid
{
	namespace Mathematics
	{
		class CMatrix;
	}
	
	namespace Algorithms
	{
		class CImageOperationInfo;

		class CInternalRavidImage;

		class AFX_EXT_CLASS CRavidImage : public CRavidObject
		{
			RavidUseDynamicCreation();

		public:

			enum EInterpolationMethod
			{
				EInterpolationMethod_NearestNeighbor = 0,
				EInterpolationMethod_Bilinear,
				EInterpolationMethod_Bicubic,
			};

			enum EHarrisCornerDetectorThresholdType
			{
				EHarrisCornerDetectorThresholdType_Absolute = 0,
				EHarrisCornerDetectorThresholdType_Relative,
			};

			enum ECannyEdgeDetectorThresholdType
			{
				ECannyEdgeDetectorThresholdType_Absolute = 0,
				ECannyEdgeDetectorThresholdType_Relative,
			};

			enum EProjectionDirectionType
			{
				EProjectionDirectionType_Row = 0,
				EProjectionDirectionType_Column,
				EProjectionDirectionType_Angle
			};

			enum EFFTMethod
			{
				EFFTMethod_ForwardFloatNone = 0,
				EFFTMethod_ForwardFloatShift,
				EFFTMethod_ForwardDoubleNone,
				EFFTMethod_ForwardDoubleShift,
				EFFTMethod_Backward,
			};

			enum EMorphologyMethod
			{
				EMorphologyMethod_Erode = 0,
				EMorphologyMethod_Dilate,
				EMorphologyMethod_Open,
				EMorphologyMethod_Close,
				EMorphologyMethod_Gradient,
				EMorphologyMethod_WhiteTopHat,
				EMorphologyMethod_BlackTopHat,
				EMorphologyMethod_Median3x3,
				EMorphologyMethod_Median5x5,
				EMorphologyMethod_Median7x7,
				EMorphologyMethod_MedianMxN,
			};

			enum EAdaptiveThresholdType
			{
				EAdaptiveThresholdType_Binary = 0,
				EAdaptiveThresholdType_Binary_Inv,
			};

			enum EAdaptiveThresholdMethod
			{
				EAdaptiveThresholdMethod_Mean = 0,
				EAdaptiveThresholdMethod_Gaussian,
			};

			enum EThresholdLogicalOperator
			{
				EThresholdLogicalOperator_None = 0,
				EThresholdLogicalOperator_And,
				EThresholdLogicalOperator_Or,

			};

			enum EConvertDepth
			{
				EConvertDepth_ToU8 = 0x00008,
				EConvertDepth_ToU10 = 0x0000A,
				EConvertDepth_ToU12 = 0x0000C,
				EConvertDepth_ToU13 = 0x0000D,
				EConvertDepth_ToU14 = 0x0000E,
				EConvertDepth_ToU16 = 0x00010,
				EConvertDepth_ToU32 = 0x00020,
				EConvertDepth_ToU64 = 0x00040,

				EConvertDepth_ToS8 = 0x00108,
				EConvertDepth_ToS10 = 0x0010A,
				EConvertDepth_ToS12 = 0x0010C,
				EConvertDepth_ToS13 = 0x0010D,
				EConvertDepth_ToS14 = 0x0010E,
				EConvertDepth_ToS16 = 0x00110,
				EConvertDepth_ToS32 = 0x00120,
				EConvertDepth_ToS64 = 0x00140,

				EConvertDepth_ToF32 = 0x00220,
				EConvertDepth_ToF64 = 0x00240,
			};

			enum EFlipType
			{
				EFlipType_X = 0,
				EFlipType_Y,
				EFlipType_XY,
			};

			enum EConvolutionPreset
			{
				EConvolutionPreset_Uniform3x3 = 0,
				EConvolutionPreset_Gaussian3x3,
				EConvolutionPreset_LowPass1,
				EConvolutionPreset_LowPass2,
				EConvolutionPreset_LowPass3,

				EConvolutionPreset_Uniform5x5,
				EConvolutionPreset_Gaussian5x5,

				EConvolutionPreset_Uniform7x7,
				EConvolutionPreset_Gaussian7x7,

				EConvolutionPreset_Sharpen,
				EConvolutionPreset_HighPass1,
				EConvolutionPreset_HighPass2,

				EConvolutionPreset_GradientX,
				EConvolutionPreset_GradientY,
				EConvolutionPreset_Gradient,

				EConvolutionPreset_SobelX,
				EConvolutionPreset_SobelY,
				EConvolutionPreset_Sobel,

				EConvolutionPreset_PrewittX,
				EConvolutionPreset_PrewittY,
				EConvolutionPreset_Prewitt,

				EConvolutionPreset_LaplacianX,
				EConvolutionPreset_LaplacianY,
				EConvolutionPreset_Laplacian4,
				EConvolutionPreset_Laplacian8,

				EConvolutionPreset_CompassN,
				EConvolutionPreset_CompassNW,
				EConvolutionPreset_CompassW,
				EConvolutionPreset_CompassSW,
				EConvolutionPreset_CompassS,
				EConvolutionPreset_CompassSE,
				EConvolutionPreset_CompassE,
				EConvolutionPreset_CompassNE,
			};

			enum EValueType
			{
				EValueType_Unsigned = 0,
				EValueType_Signed,
				EValueType_FloatingPoint
			};


			enum EValueFormat
			{
				// 1 Channel Unsigned 8 ~ 64bit
				EValueFormat_1C_U8 = 0x00008,
				EValueFormat_1C_U10 = 0x0000A,
				EValueFormat_1C_U12 = 0x0000C,
				EValueFormat_1C_U13 = 0x0000D,
				EValueFormat_1C_U14 = 0x0000E,
				EValueFormat_1C_U16 = 0x00010,
				EValueFormat_1C_U32 = 0x00020,
				EValueFormat_1C_U64 = 0x00040,

				// 1 Channel Signed 8 ~ 64bit
				EValueFormat_1C_S8 = 0x00108,
				EValueFormat_1C_S10 = 0x0010A,
				EValueFormat_1C_S12 = 0x0010C,
				EValueFormat_1C_S13 = 0x0010D,
				EValueFormat_1C_S14 = 0x0010E,
				EValueFormat_1C_S16 = 0x00110,
				EValueFormat_1C_S32 = 0x00120,
				EValueFormat_1C_S64 = 0x00140,

				// 1 Channel Float 32 ~ 64bit
				EValueFormat_1C_F32 = 0x00220,
				EValueFormat_1C_F64 = 0x00240,


				// 2 Channel Unsigned 8 ~ 64bit
				EValueFormat_2C_U8 = 0x01008,
				EValueFormat_2C_U10 = 0x0100A,
				EValueFormat_2C_U12 = 0x0100C,
				EValueFormat_2C_U13 = 0x0100D,
				EValueFormat_2C_U14 = 0x0100E,
				EValueFormat_2C_U16 = 0x01010,
				EValueFormat_2C_U32 = 0x01020,
				EValueFormat_2C_U64 = 0x01040,

				// 2 Channel Signed 8 ~ 64bit
				EValueFormat_2C_S8 = 0x01108,
				EValueFormat_2C_S10 = 0x0110A,
				EValueFormat_2C_S12 = 0x0110C,
				EValueFormat_2C_S13 = 0x0110D,
				EValueFormat_2C_S14 = 0x0110E,
				EValueFormat_2C_S16 = 0x01110,
				EValueFormat_2C_S32 = 0x01120,
				EValueFormat_2C_S64 = 0x01140,

				// 2 Channel Float 32 ~ 64bit
				EValueFormat_2C_F32 = 0x01220,
				EValueFormat_2C_F64 = 0x01240,


				// 3 Channel Unsigned 8 ~ 64bit
				EValueFormat_3C_U8 = 0x02008,
				EValueFormat_3C_U10 = 0x0200A,
				EValueFormat_3C_U12 = 0x0200C,
				EValueFormat_3C_U13 = 0x0200D,
				EValueFormat_3C_U14 = 0x0200E,
				EValueFormat_3C_U16 = 0x02010,
				EValueFormat_3C_U32 = 0x02020,
				EValueFormat_3C_U64 = 0x02040,

				// 3 Channel Signed 8 ~ 64bit
				EValueFormat_3C_S8 = 0x02108,
				EValueFormat_3C_S10 = 0x0210A,
				EValueFormat_3C_S12 = 0x0210C,
				EValueFormat_3C_S13 = 0x0210D,
				EValueFormat_3C_S14 = 0x0210E,
				EValueFormat_3C_S16 = 0x02110,
				EValueFormat_3C_S32 = 0x02120,
				EValueFormat_3C_S64 = 0x02140,

				// 3 Channel Float 32 ~ 64bit
				EValueFormat_3C_F32 = 0x02220,
				EValueFormat_3C_F64 = 0x02240,


				// 4 Channel Unsigned 8 ~ 64bit
				EValueFormat_4C_U8 = 0x03008,
				EValueFormat_4C_U10 = 0x0300A,
				EValueFormat_4C_U12 = 0x0300C,
				EValueFormat_4C_U13 = 0x0300D,
				EValueFormat_4C_U14 = 0x0300E,
				EValueFormat_4C_U16 = 0x03010,
				EValueFormat_4C_U32 = 0x03020,
				EValueFormat_4C_U64 = 0x03040,

				// 4 Channel Signed 8 ~ 64bit
				EValueFormat_4C_S8 = 0x03108,
				EValueFormat_4C_S10 = 0x0310A,
				EValueFormat_4C_S12 = 0x0310C,
				EValueFormat_4C_S13 = 0x0310D,
				EValueFormat_4C_S14 = 0x0310E,
				EValueFormat_4C_S16 = 0x03110,
				EValueFormat_4C_S32 = 0x03120,
				EValueFormat_4C_S64 = 0x03140,

				// 4 Channel Float 32 ~ 64bit
				EValueFormat_4C_F32 = 0x03220,
				EValueFormat_4C_F64 = 0x03240,


				// 5 Channel Unsigned 8 ~ 64bit
				EValueFormat_5C_U8 = 0x04008,
				EValueFormat_5C_U10 = 0x0400A,
				EValueFormat_5C_U12 = 0x0400C,
				EValueFormat_5C_U13 = 0x0400D,
				EValueFormat_5C_U14 = 0x0400E,
				EValueFormat_5C_U16 = 0x04010,
				EValueFormat_5C_U32 = 0x04020,
				EValueFormat_5C_U64 = 0x04040,

				// 5 Channel Signed 8 ~ 64bit
				EValueFormat_5C_S8 = 0x04108,
				EValueFormat_5C_S10 = 0x0410A,
				EValueFormat_5C_S12 = 0x0410C,
				EValueFormat_5C_S13 = 0x0410D,
				EValueFormat_5C_S14 = 0x0410E,
				EValueFormat_5C_S16 = 0x04110,
				EValueFormat_5C_S32 = 0x04120,
				EValueFormat_5C_S64 = 0x04140,

				// 5 Channel Float 32 ~ 64bit
				EValueFormat_5C_F32 = 0x04220,
				EValueFormat_5C_F64 = 0x04240,


				// 6 Channel Unsigned 8 ~ 64bit
				EValueFormat_6C_U8 = 0x05008,
				EValueFormat_6C_U10 = 0x0500A,
				EValueFormat_6C_U12 = 0x0500C,
				EValueFormat_6C_U13 = 0x0500D,
				EValueFormat_6C_U14 = 0x0500E,
				EValueFormat_6C_U16 = 0x05010,
				EValueFormat_6C_U32 = 0x05020,
				EValueFormat_6C_U64 = 0x05040,

				// 6 Channel Signed 8 ~ 64bit
				EValueFormat_6C_S8 = 0x05108,
				EValueFormat_6C_S10 = 0x0510A,
				EValueFormat_6C_S12 = 0x0510C,
				EValueFormat_6C_S13 = 0x0510D,
				EValueFormat_6C_S14 = 0x0510E,
				EValueFormat_6C_S16 = 0x05110,
				EValueFormat_6C_S32 = 0x05120,
				EValueFormat_6C_S64 = 0x05140,

				// 6 Channel Float 32 ~ 64bit
				EValueFormat_6C_F32 = 0x05220,
				EValueFormat_6C_F64 = 0x05240,


				// 7 Channel Unsigned 8 ~ 64bit
				EValueFormat_7C_U8 = 0x06008,
				EValueFormat_7C_U10 = 0x0600A,
				EValueFormat_7C_U12 = 0x0600C,
				EValueFormat_7C_U13 = 0x0600D,
				EValueFormat_7C_U14 = 0x0600E,
				EValueFormat_7C_U16 = 0x06010,
				EValueFormat_7C_U32 = 0x06020,
				EValueFormat_7C_U64 = 0x06040,

				// 7 Channel Signed 32 ~ 64bit
				EValueFormat_7C_S8 = 0x06108,
				EValueFormat_7C_S10 = 0x0610A,
				EValueFormat_7C_S12 = 0x0610C,
				EValueFormat_7C_S13 = 0x0610D,
				EValueFormat_7C_S14 = 0x0610E,
				EValueFormat_7C_S16 = 0x06110,
				EValueFormat_7C_S32 = 0x06120,
				EValueFormat_7C_S64 = 0x06140,

				// 7 Channel Float 8 ~ 64bit
				EValueFormat_7C_F32 = 0x06220,
				EValueFormat_7C_F64 = 0x06240,


				// 8 Channel Unsigned 8 ~ 64bit
				EValueFormat_8C_U8 = 0x07008,
				EValueFormat_8C_U10 = 0x0700A,
				EValueFormat_8C_U12 = 0x0700C,
				EValueFormat_8C_U13 = 0x0700D,
				EValueFormat_8C_U14 = 0x0700E,
				EValueFormat_8C_U16 = 0x07010,
				EValueFormat_8C_U32 = 0x07020,
				EValueFormat_8C_U64 = 0x07040,

				// 8 Channel Signed 32 ~ 64bit
				EValueFormat_8C_S8 = 0x07108,
				EValueFormat_8C_S10 = 0x0710A,
				EValueFormat_8C_S12 = 0x0710C,
				EValueFormat_8C_S13 = 0x0710D,
				EValueFormat_8C_S14 = 0x0710E,
				EValueFormat_8C_S16 = 0x07110,
				EValueFormat_8C_S32 = 0x07120,
				EValueFormat_8C_S64 = 0x07140,

				// 8 Channel Float 8 ~ 64bit
				EValueFormat_8C_F32 = 0x07220,
				EValueFormat_8C_F64 = 0x07240,


				// 9 Channel Unsigned 8 ~ 64bit
				EValueFormat_9C_U8 = 0x08008,
				EValueFormat_9C_U10 = 0x0800A,
				EValueFormat_9C_U12 = 0x0800C,
				EValueFormat_9C_U13 = 0x0800D,
				EValueFormat_9C_U14 = 0x0800E,
				EValueFormat_9C_U16 = 0x08010,
				EValueFormat_9C_U32 = 0x08020,
				EValueFormat_9C_U64 = 0x08040,

				// 9 Channel Signed 32 ~ 64bit
				EValueFormat_9C_S8 = 0x08108,
				EValueFormat_9C_S10 = 0x0810A,
				EValueFormat_9C_S12 = 0x0810C,
				EValueFormat_9C_S13 = 0x0810D,
				EValueFormat_9C_S14 = 0x0810E,
				EValueFormat_9C_S16 = 0x08110,
				EValueFormat_9C_S32 = 0x08120,
				EValueFormat_9C_S64 = 0x08140,

				// 9 Channel Float 8 ~ 64bit
				EValueFormat_9C_F32 = 0x08220,
				EValueFormat_9C_F64 = 0x08240,


				// 10 Channel Unsigned 8 ~ 64bit
				EValueFormat_10C_U8 = 0x09008,
				EValueFormat_10C_U10 = 0x0900A,
				EValueFormat_10C_U12 = 0x0900C,
				EValueFormat_10C_U13 = 0x0900D,
				EValueFormat_10C_U14 = 0x0900E,
				EValueFormat_10C_U16 = 0x09010,
				EValueFormat_10C_U32 = 0x09020,
				EValueFormat_10C_U64 = 0x09040,

				// 10 Channel Signed 32 ~ 64bit
				EValueFormat_10C_S8 = 0x09108,
				EValueFormat_10C_S10 = 0x0910A,
				EValueFormat_10C_S12 = 0x0910C,
				EValueFormat_10C_S13 = 0x0910D,
				EValueFormat_10C_S14 = 0x0910E,
				EValueFormat_10C_S16 = 0x09110,
				EValueFormat_10C_S32 = 0x09120,
				EValueFormat_10C_S64 = 0x09140,

				// 10 Channel Float 8 ~ 64bit
				EValueFormat_10C_F32 = 0x09220,
				EValueFormat_10C_F64 = 0x09240,
			};


			typedef struct sFFTInfo
			{
				ptrdiff_t nOrgSizeX;
				ptrdiff_t nOrgSizeY;
				long nOrgWidthStep;
				bool bOrgColor;
				long nOrgDepth;
				long nOrgChannels;
				double dblFFTMaxValue;
				bool bFloating = false;

				EFFTMethod eMethod;
			}sFFTInfo;


			CRavidImage();
			CRavidImage(_In_ CRavidImage& imgInfo);
			CRavidImage(_In_ CRavidImage* pImgInfo);
			CRavidImage(_In_ ptrdiff_t nSizeX, _In_ ptrdiff_t nSizeY, _In_opt_ Framework::CMultipleVariable rmvFillValue = {}, _In_opt_ EValueFormat eValueFormat = EValueFormat_1C_U8, _In_opt_ long nWidthStep = 0, _In_opt_ long nAlignBytes = 4);  

			CRavidImage& operator=(_In_ CRavidImage& riInfo);
			virtual ~CRavidImage();

			bool IsLoaded();

			EAlgorithmResult Load(_In_ LPCTSTR lpszFileName);
			EAlgorithmResult Save(_In_ LPCTSTR lpszFileName);
			EAlgorithmResult CompressionSave(_In_ LPCTSTR lpszFileName, _In_ int nCompressionQuality = 95);

			void SetSizeX(_In_ ptrdiff_t nSizeX);
			ptrdiff_t GetSizeX();

			void SetSizeY(_In_ ptrdiff_t nSizeY);
			ptrdiff_t GetSizeY();

			ptrdiff_t GetImageSizeByte();

			bool IsColor();

			bool SetFloatingPoint(_In_opt_ bool bFloatingPoint = false);
			bool IsFloatingPoint();

			void SetWidthStep(_In_ ptrdiff_t nWidthStep);
			ptrdiff_t GetWidthStep();

			long GetDepth();
			long GetChannels();

			EValueFormat GetValueFormat();

			static EValueFormat MakeValueFormat(_In_opt_ long nChannel = 1, _In_opt_ long nBpp = 8, _In_opt_ EValueType eType = EValueType_Unsigned);

			void SetAlignBytes(_In_ long nAlignBytes);
			long GetAlignBytes();

			long GetPixelSizeByte();

			BYTE* GetBuffer();

			size_t* GetXOffsetTable();
			BYTE** GetYOffsetTable();

			void SetManualDestroyBuffer(_In_ bool bManualDestroyBuffer);
			bool IsManualDestroyBuffer();

			void SetIntegral(_In_ bool bIntegral);
			bool IsIntegral();

			void SetFileName(_In_ CString strFileName);
			CString GetFileName();


			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<int>& rrSrcRg, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<int>* prrSrcRg, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<long long>& rrSrcRg, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<long long>* prrSrcRg, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<float>& rrSrcRg, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<float>* prrSrcRg, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<double>& rrSrcRg, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<double>* prrSrcRg, _Out_ Framework::CMultipleVariable* rmvSumValue);

			EAlgorithmResult GetIntegralValue(_In_ RECT& rc, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ RECT* prc, _Out_ Framework::CMultipleVariable* rmvSumValue);

			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<int>& rpPoint1, _In_ CRavidPoint<int>& rpPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<float>& rpPoint1, _In_ CRavidPoint<float>& rpPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<long long>& rpPoint1, _In_ CRavidPoint<long long>& rpPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<double>& rpPoint1, _In_ CRavidPoint<double>& rpPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<int>* prpPoint1, _In_ CRavidPoint<int>* prpPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<float>* prpPoint1, _In_ CRavidPoint<float>* prpPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<long long>* prpPoint1, _In_ CRavidPoint<long long>* prpPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<double>* prpPoint1, _In_ CRavidPoint<double>* prpPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);

			EAlgorithmResult GetIntegralValue(_In_ int nLeft, _In_ int nTop, _In_ int nRight, _In_ int nBottom, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ float fLeft, _In_ float fTop, _In_ float fRight, _In_ float fBottom, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ long long llLeft, _In_ long long llTop, _In_ long long llRight, _In_ long long llBottom, _Out_ Framework::CMultipleVariable* rmvSumValue);
			EAlgorithmResult GetIntegralValue(_In_ double dblLeft, _In_ double dblTop, _In_ double dblRight, _In_ double dblBottom, _Out_ Framework::CMultipleVariable* rmvSumValue);

			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ BYTE* pValue);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2, _Out_ BYTE* pValue3);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2, _Out_ BYTE* pValue3, _Out_ BYTE* pValue4);

			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ WORD* pValue);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ WORD* pValue1, _Out_ WORD* pValue2);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ WORD* pValue1, _Out_ WORD* pValue2, _Out_ WORD* pValue3);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ WORD* pValue1, _Out_ WORD* pValue2, _Out_ WORD* pValue3, _Out_ WORD* pValue4);

			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ DWORD* pValue);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2, _Out_ DWORD* pValue3);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2, _Out_ DWORD* pValue3, _Out_ DWORD* pValue4);

			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ float* pValue);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ float* pValue1, _Out_ float* pValue2);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ float* pValue1, _Out_ float* pValue2, _Out_ float* pValue3);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ float* pValue1, _Out_ float* pValue2, _Out_ float* pValue3, _Out_ float* pValue4);

			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ double* pValue);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ double* pValue1, _Out_ double* pValue2);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ double* pValue1, _Out_ double* pValue2, _Out_ double* pValue3);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ double* pValue1, _Out_ double* pValue2, _Out_ double* pValue3, _Out_ double* pValue4);

			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ long long* pValue);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ long long* pValue1, _Out_ long long* pValue2);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ long long* pValue1, _Out_ long long* pValue2, _Out_ long long* pValue3);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ long long* pValue1, _Out_ long long* pValue2, _Out_ long long* pValue3, _Out_ long long* pValue4);

			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ unsigned long long* pValue);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2, _Out_ unsigned long long* pValue3);
			void GetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2, _Out_ unsigned long long* pValue3, _Out_ unsigned long long* pValue4);

			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ BYTE* pValue);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2, _Out_ BYTE* pValue3);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2, _Out_ BYTE* pValue3, _Out_ BYTE* pValue4);

			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ WORD* pValue);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ WORD* pValue1, _Out_ WORD* pValue2);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ WORD* pValue1, _Out_ WORD* pValue2, _Out_ WORD* pValue3);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ WORD* pValue1, _Out_ WORD* pValue2, _Out_ WORD* pValue3, _Out_ WORD* pValue4);

			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ DWORD* pValue);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2, _Out_ DWORD* pValue3);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2, _Out_ DWORD* pValue3, _Out_ DWORD* pValue4);

			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ float* pValue);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ float* pValue1, _Out_ float* pValue2);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ float* pValue1, _Out_ float* pValue2, _Out_ float* pValue3);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ float* pValue1, _Out_ float* pValue2, _Out_ float* pValue3, _Out_ float* pValue4);

			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ double* pValue);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ double* pValue1, _Out_ double* pValue2);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ double* pValue1, _Out_ double* pValue2, _Out_ double* pValue3);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ double* pValue1, _Out_ double* pValue2, _Out_ double* pValue3, _Out_ double* pValue4);

			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ long long* pValue);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ long long* pValue1, _Out_ long long* pValue2);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ long long* pValue1, _Out_ long long* pValue2, _Out_ long long* pValue3);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ long long* pValue1, _Out_ long long* pValue2, _Out_ long long* pValue3, _Out_ long long* pValue4);

			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ unsigned long long* pValue);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2, _Out_ unsigned long long* pValue3);
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2, _Out_ unsigned long long* pValue3, _Out_ unsigned long long* pValue4);

			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ BYTE bValue);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ BYTE bValue1, _In_ BYTE bValue2);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ BYTE bValue1, _In_ BYTE bValue2, _In_ BYTE bValue3);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ BYTE bValue1, _In_ BYTE bValue2, _In_ BYTE bValue3, _In_ BYTE bValue4);

			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ WORD wValue);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ WORD wValue1, _In_ WORD wValue2);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ WORD wValue1, _In_ WORD wValue2, _In_ WORD wValue3);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ WORD wValue1, _In_ WORD wValue2, _In_ WORD wValue3, _In_ WORD wValue4);

			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ DWORD dwValue);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ DWORD dwValue1, _In_ DWORD dwValue2);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ DWORD dwValue1, _In_ DWORD dwValue2, _In_ DWORD dwValue3);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ DWORD dwValue1, _In_ DWORD dwValue2, _In_ DWORD dwValue3, _In_ DWORD dwValue4);

			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ float fValue);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ float fValue1, _In_ float fValue2);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ float fValue1, _In_ float fValue2, _In_ float fValue3);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ float fValue1, _In_ float fValue2, _In_ float fValue3, _In_ float fValue4);

			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ double dblValue);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ double dblValue1, _In_ double dblpValue2);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ double dblValue1, _In_ double dblpValue2, _In_ double dblpValue3);
			void SetValue(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ double dblValue1, _In_ double dblpValue2, _In_ double dblpValue3, _In_ double dblValue4);

			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ BYTE bValue);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ BYTE bValue1, _In_ BYTE bValue2);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ BYTE bValue1, _In_ BYTE bValue2, _In_ BYTE bValue3);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ BYTE bValue1, _In_ BYTE bValue2, _In_ BYTE bValue3, _In_ BYTE bValue4);

			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ WORD wValue);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ WORD wValue1, _In_ WORD wValue2);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ WORD wValue1, _In_ WORD wValue2, _In_ WORD wValue3);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ WORD wValue1, _In_ WORD wValue2, _In_ WORD wValue3, _In_ WORD wValue4);

			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ DWORD dwValue);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ DWORD dwValue1, _In_ DWORD dwValue2);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ DWORD dwValue1, _In_ DWORD dwValue2, _In_ DWORD dwValue3);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ DWORD dwValue1, _In_ DWORD dwValue2, _In_ DWORD dwValue3, _In_ DWORD dwValue4);

			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ float fValue);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ float fValue1, _In_ float fValue2);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ float fValue1, _In_ float fValue2, _In_ float fValue3);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ float fValue1, _In_ float fValue2, _In_ float fValue3, _In_ float fValue4);

			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ double dblValue);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ double dblValue1, _In_ double dblValue2);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ double dblValue1, _In_ double dblValue2, _In_ double dblValue3);
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t nX, _In_ ptrdiff_t nY, _In_ double dblValue1, _In_ double dblValue2, _In_ double dblValue3, _In_ double dblValue4);

			float GetGVBilinear(_In_ float fX, _In_ float fY);
			float GetGVBilinear(_In_ CRavidPoint<float>* pRpPoint);
			float GetGVBilinear(_In_ CRavidPoint<float>& rpPoint);
			float GetGVBilinear(_In_ CRavidPoint<double>* pRpPoint);
			float GetGVBilinear(_In_ CRavidPoint<double>& rpPoint);

			EAlgorithmResult GetRGBBilinear(_In_ float fX, _In_ float fY, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			EAlgorithmResult GetRGBBilinear(_In_ CRavidPoint<float>* pRpPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			EAlgorithmResult GetRGBBilinear(_In_ CRavidPoint<float>& rpPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			EAlgorithmResult GetRGBBilinear(_In_ CRavidPoint<double>* pRpPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			EAlgorithmResult GetRGBBilinear(_In_ CRavidPoint<double>& rpPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);

			float GetGVBicubic(_In_ float fX, _In_ float fY);
			float GetGVBicubic(_In_ CRavidPoint<float>* pRpPoint);
			float GetGVBicubic(_In_ CRavidPoint<float>& rpPoint);
			float GetGVBicubic(_In_ CRavidPoint<double>* pRpPoint);
			float GetGVBicubic(_In_ CRavidPoint<double>& rpPoint);

			EAlgorithmResult GetRGBBicubic(_In_ float fX, _In_ float fY, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			EAlgorithmResult GetRGBBicubic(_In_ CRavidPoint<float>* pRpPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			EAlgorithmResult GetRGBBicubic(_In_ CRavidPoint<float>& rpPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			EAlgorithmResult GetRGBBicubic(_In_ CRavidPoint<double>* pRpPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			EAlgorithmResult GetRGBBicubic(_In_ CRavidPoint<double>& rpPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);

			void Clear();

			EAlgorithmResult Copy(_In_ CRavidImage& imgInfoSrc);
			EAlgorithmResult Copy(_In_ CRavidImage* pImgInfoSrc);

			EAlgorithmResult Paste(_Out_ CRavidImage& pDstImgInfo, _In_opt_ CRavidGeometry* pSrcRegion = nullptr, _In_opt_ CRavidGeometry* pDstRegion = nullptr);
			EAlgorithmResult Paste(_Out_ CRavidImage* pDstImgInfo, _In_opt_ CRavidGeometry* pSrcRegion = nullptr, _In_opt_ CRavidGeometry* pDstRegion = nullptr);

			EAlgorithmResult Swap(_In_ CRavidImage& imgInfo);
			EAlgorithmResult Swap(_In_ CRavidImage* pImgInfo);

			EAlgorithmResult CopyRGBToGray(_In_ CRavidImage* pImgInfoSrcRGB);
			EAlgorithmResult CopyARGBToGray(_In_ CRavidImage* pImgInfoSrcARGB);
			EAlgorithmResult CopyGrayToRGB(_In_ CRavidImage* pImgInfoSrcGray);
			EAlgorithmResult CopyGrayToARGB(_In_ CRavidImage* pImgInfoSrcGray);
			EAlgorithmResult CopyRGBToYComponent(_In_ CRavidImage* pImgInfoSrcRGB);
			EAlgorithmResult CopyARGBToYComponent(_In_ CRavidImage* pImgInfoSrcARGB);
			EAlgorithmResult CopyRGBToARGB(_In_ CRavidImage* pImgInfoSrcRGB);
			EAlgorithmResult CopyARGBToRGB(_In_ CRavidImage* pImgInfoSrcARGB);

			EAlgorithmResult CreateImageBuffer(_In_ ptrdiff_t nSizeX, _In_ ptrdiff_t nSizeY, _In_opt_ Framework::CMultipleVariable rmvFillValue = {}, _In_opt_ EValueFormat eValueFormat = EValueFormat_1C_U8, _In_opt_ long nWidthStep = 0, _In_opt_ long nAlignBytes = 4);

			EAlgorithmResult SetImagePtr(_In_ BYTE* pData, _In_ ptrdiff_t nSizeX, _In_ ptrdiff_t nSizeY, _In_opt_ EValueFormat eValueFormat = EValueFormat_1C_U8, _In_opt_ long nWidthStep = 0, _In_opt_ long nAlignBytes = 4, _In_opt_ bool bManualDestroy = true, _In_opt_ bool bClear = true);

			EAlgorithmResult ConvertRGBToGray();
			EAlgorithmResult ConvertARGBToGray();
			EAlgorithmResult ConvertGrayToRGB();
			EAlgorithmResult ConvertGrayToARGB();
			EAlgorithmResult ConvertRGBToYComponent();
			EAlgorithmResult ConvertARGBToYComponent();
			EAlgorithmResult ConvertRGBToARGB();
			EAlgorithmResult ConvertARGBToRGB();

			EAlgorithmResult Rotate(_In_ double dblAngle, _In_opt_ CRavidPoint<double>* pRpPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ bool bResizing = false, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Scale(_In_ CRavidPoint<double>& rpRatio, _In_opt_ bool bResizing = true, _In_opt_ CRavidPoint<double>* pRpPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Scale(_In_ CRavidPoint<double>* pRpRatio, _In_opt_ bool bResizing = true, _In_opt_ CRavidPoint<double>* pRpPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Scale(_In_ double dblRatioX, _In_ double dblRatioY, _In_opt_ bool bResizing = true, _In_opt_ CRavidPoint<double>* pRpPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult MovePosition(_In_ double dblDeltaX, _In_ double dblDeltaY, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pRgRegion = nullptr);
			EAlgorithmResult MovePosition(_In_ CRavidPoint<double>& rpDelta, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pRgRegion = nullptr);
			EAlgorithmResult MovePosition(_In_ CRavidPoint<double>* rpDelta, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Gain(_In_ Framework::CMultipleVariable rmvGainVal, _In_opt_ CRavidGeometry* pRgRegion = nullptr);
			EAlgorithmResult Offset(_In_ Framework::CMultipleVariable rmvOffsetVal, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Convolution(_In_ Ravid::Mathematics::CMatrix& rmKernel, _In_opt_ CRavidGeometry* pRgRegion = nullptr, _In_opt_ bool bAbsolute = false);
			EAlgorithmResult Convolution(_In_ Ravid::Mathematics::CMatrix* pRmKernel, _In_opt_ CRavidGeometry* pRgRegion = nullptr, _In_opt_ bool bAbsolute = false);

			EAlgorithmResult Convolution(_In_ EConvolutionPreset ePreset, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Operation(_In_ CImageOperationInfo& imgOper, _In_opt_ CRavidGeometry* pRgSrcRegion = nullptr, _In_opt_ CRavidGeometry* pRgOperRegion = nullptr);
			EAlgorithmResult Operation(_In_ CImageOperationInfo* pImgOper, _In_opt_ CRavidGeometry* pRgSrcRegion = nullptr, _In_opt_ CRavidGeometry* pRgOperRegion = nullptr);

			EAlgorithmResult Mask(_In_ Framework::CMultipleVariable rmvFill, _In_ CRavidGeometry& rgRegion);
			EAlgorithmResult Mask(_In_ Framework::CMultipleVariable rmvFill, _In_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Flip(_In_ EFlipType eFlipType, _In_ CRavidPoint<double>* pRpPivot = nullptr, _In_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ CRavidGeometry* pRgROI = nullptr);

			EAlgorithmResult Crop(_In_ CRavidGeometry& rgRegion, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0);
			EAlgorithmResult Crop(_In_ CRavidGeometry* pRgRegion, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0);

			EAlgorithmResult HarrisCornerDetector(_In_opt_ EHarrisCornerDetectorThresholdType ehcdtType, _In_ float fThreshHold, _Out_ CRavidGeometryArray *pRgaResult, _In_opt_ float fCornerCoefficient = 0.04f, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult CannyEdgeDetector(_In_ float fLowThreshold, _In_ float fHighThreshold, _In_opt_ ECannyEdgeDetectorThresholdType ecedtType = ECannyEdgeDetectorThresholdType_Absolute, _In_opt_ int nGaussianBlurSize = 0, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Projection(_In_ EProjectionDirectionType eprjDir, _Out_ std::vector<Framework::CMultipleVariable>* pVctResult, _In_opt_ double dblAngle = 0.0, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Histogram(_Out_ std::vector<Framework::CMultipleVariable>* pVctResult, _Out_opt_ unsigned long long* ullPixelTotalCnt = nullptr, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult HistogramNormalize(_Out_ std::vector<Framework::CMultipleVariable>* pVctResult, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Stretch(_In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult Stretch(_In_opt_ Framework::CMultipleVariable rmvMinMax1, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult Stretch(_In_opt_ Framework::CMultipleVariable rmvMinMax1, _In_opt_ Framework::CMultipleVariable rmvMinMax2, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult Stretch(_In_opt_ Framework::CMultipleVariable rmvMinMax1, _In_opt_ Framework::CMultipleVariable rmvMinMax2, _In_opt_ Framework::CMultipleVariable rmvMinMax3, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult Stretch(_In_opt_ Framework::CMultipleVariable rmvMinMax1, _In_opt_ Framework::CMultipleVariable rmvMinMax2, _In_opt_ Framework::CMultipleVariable rmvMinMax3, _In_opt_ Framework::CMultipleVariable rmvMinMax4, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult SingleThreshold(_In_ Framework::CMultipleVariable rmvtThreshold, _In_opt_ Framework::CMultipleCondition rmvnCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtOutOfRangeFillValue = EImageDepthRange_Min, _In_opt_ CRavidGeometry* pRgRegion = nullptr, _In_opt_ CRavidImage::EThresholdLogicalOperator eLogicalOperator = EThresholdLogicalOperator_None);

			EAlgorithmResult DoubleThreshold(_In_ Framework::CMultipleVariable rmvtLowThreshold, _In_ Framework::CMultipleVariable rmvtHighThreshold, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtLesserThanLowFillValue = EImageDepthRange_Min, _In_opt_ Framework::CMultipleVariable rmvtGreaterThanHighFillValue = EImageDepthRange_Min, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			_Out_ Framework::CMultipleVariable GetOtsuThreshold(_In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult OtsuThreshold(_In_opt_ Framework::CMultipleCondition rmvnCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtOutOfRangeFillValue = EImageDepthRange_Min, _Out_opt_ Framework::CMultipleVariable* pOutThreshold = nullptr, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult AdaptiveThreshold(_In_opt_ EAdaptiveThresholdType eATT = EAdaptiveThresholdType::EAdaptiveThresholdType_Binary, _In_opt_ EAdaptiveThresholdMethod eATM = EAdaptiveThresholdMethod::EAdaptiveThresholdMethod_Mean, _In_opt_ Framework::CMultipleVariable rmvMaxValue = 255, _In_opt_ int nBlockSize = 3, _In_opt_ Framework::CMultipleVariable rmvConstant = 10.0, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			_Out_ Framework::CMultipleVariable GetIsodataThreshold(_In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult IsodataThreshold(_In_opt_ Framework::CMultipleCondition rmcCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvOutOfRangeFillValue = EImageDepthRange_Min, _Out_opt_ Framework::CMultipleVariable* pOutThreshold = nullptr, _In_opt_ CRavidGeometry *pRgRegion = nullptr);

			_Out_ Framework::CMultipleVariable GetMaximumEntropyThreshold(CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult MaximumEntropyThreshold(_In_opt_ Framework::CMultipleCondition rmvnCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtOutOfRangeFillValue = EImageDepthRange_Min, _Out_opt_ Framework::CMultipleVariable* pOutThreshold = nullptr, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			sFFTInfo* GetFFTInfo();

			EAlgorithmResult FFT(_In_opt_ EFFTMethod eFFTMethod = EFFTMethod_ForwardFloatShift, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult Morphology(_In_ int nHalfWidth, _In_ int nHalfHeight, _In_opt_ EMorphologyMethod eMorphologyMethod = EMorphologyMethod_Erode, _In_opt_ CRavidGeometry* pRgRoI = nullptr);

			EAlgorithmResult GetMin(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetMin(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMax(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetMax(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMinMax(_Out_ Framework::CMultipleVariable& RmvMinResult, _Out_ Framework::CMultipleVariable& RmvMaxResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMinMax(_Out_ Framework::CMultipleVariable* pRmvMinResult, _Out_ Framework::CMultipleVariable* pRmvMaxResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMean(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetMean(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetSum(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetSum(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMedian(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetMedian(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetVariance(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetVariance(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetStandardDeviation(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetStandardDeviation(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetCovariance(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetCovariance(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetCorrelationCoefficient(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);
			EAlgorithmResult GetCorrelationCoefficient(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetSumSqr(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetSumSqr(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMeanVar(_Out_ Framework::CMultipleVariable& rmvMeanResult, _Out_ Framework::CMultipleVariable& pRmvVarianceResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMeanVar(_Out_ Framework::CMultipleVariable* pRmvMeanResult, _Out_ Framework::CMultipleVariable* pRmvVarianceResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMeanStDev(_Out_ Framework::CMultipleVariable& RmvMeanResult, _Out_ Framework::CMultipleVariable& RmvStandardDeviationResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMeanStDev(_Out_ Framework::CMultipleVariable* pRmvMeanResult, _Out_ Framework::CMultipleVariable* pRmvStandardDeviationResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMeanVarStDev(_Out_ Framework::CMultipleVariable& rmvMeanResult, _Out_ Framework::CMultipleVariable& rmvVarianceResult, _Out_ Framework::CMultipleVariable& pRmvStandardDeviationResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetMeanVarStDev(_Out_ Framework::CMultipleVariable* pRmvMeanResult, _Out_ Framework::CMultipleVariable* rmvVarianceResult, _Out_ Framework::CMultipleVariable* pRmvStandardDeviationResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetVarStDev(_Out_ Framework::CMultipleVariable& RmvVarianceResult, _Out_ Framework::CMultipleVariable& RmvStandardDeviationResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult GetVarStDev(_Out_ Framework::CMultipleVariable* pRmvVarianceResult, _Out_ Framework::CMultipleVariable* pRmvStandardDeviationResult, _In_opt_ CRavidGeometry* pRgRoi = nullptr);

			EAlgorithmResult MakeIntegralTypeInt32(_In_opt_ double dblQuadricCoefficient = 0, _In_opt_ double dblLinear = 1, _In_opt_ double dblConstant = 0, _In_opt_ CRavidGeometry* pRrRoi = nullptr, _In_opt_ Ravid::Algorithms::CRavidImage* pTargetImgInfo = nullptr);

			EAlgorithmResult MakeIntegralTypeInt64(_In_opt_ double dblQuadricCoefficient = 0, _In_opt_ double dblLinear = 1, _In_opt_ double dblConstant = 0, _In_opt_ CRavidGeometry* pRrRoi = nullptr, _In_opt_ Ravid::Algorithms::CRavidImage* pTargetImgInfo = nullptr);

			EAlgorithmResult MakeIntegralTypeFloat(_In_opt_ double dblQuadricCoefficient = 0, _In_opt_ double dblLinear = 1, _In_opt_ double dblConstant = 0, _In_opt_ CRavidGeometry* pRrRoi = nullptr, _In_opt_ Ravid::Algorithms::CRavidImage* pTargetImgInfo = nullptr);

			EAlgorithmResult MakeIntegralTypeDouble(_In_opt_ double dblQuadricCoefficient = 0, _In_opt_ double dblLinear = 1, _In_opt_ double dblConstant = 0, _In_opt_ CRavidGeometry* pRrRoi = nullptr, _In_opt_ Ravid::Algorithms::CRavidImage* pTargetImgInfo = nullptr);

			EAlgorithmResult Normalize(_In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult ConvertDepth(_In_ EConvertDepth eDepth);

			EAlgorithmResult InvertValue(_In_opt_ CRavidGeometry* pSrcRegion = nullptr);

			EAlgorithmResult GetGeometricMoments(_In_ unsigned int p, _In_ unsigned int q, _Out_ double* r, _In_opt_ CRavidGeometry* pRrRoi = nullptr);
			EAlgorithmResult GetInvariantMoments(_Out_ std::vector<double>& vctMoments, _In_opt_ CRavidGeometry* pRrRoi = nullptr);
			EAlgorithmResult GetInvariantMoments(_In_ double M00, _In_ double M01, _In_ double M02, _In_ double M03,_In_ double M10, _In_ double M11, _In_ double M12, _In_ double M20, _In_ double M21, _In_ double M30, _Out_ std::vector<double>& vctMoments);
			EAlgorithmResult GetZernikeMoment( _In_ int nOrder, _Out_ std::vector<std::complex<double>>& vctMoments, _In_opt_ CRavidGeometry* pRrRoi = nullptr);
			EAlgorithmResult GetPseudoZernikeMoment(_In_ int nOrder, _Out_ std::vector<std::complex<double>>& vctMoments, _In_opt_ CRavidGeometry* pRrRoi = nullptr);

			bool IsMonoImage(_In_opt_ CRavidGeometry* pRgRegion = nullptr);

			bool SetSigned(_In_opt_ bool bSigned = false);
			bool IsSigned();

			EAlgorithmResult ConvertYUV422ToRGB();
			EAlgorithmResult CopyYUV422ToRGB(_In_ CRavidImage* pImgInfoSrcGray);

			

			EAlgorithmResult ExtractChannelComponent(_In_ int nChannelNumber, _In_opt_ CRavidGeometry* pROI = nullptr, _In_opt_ Framework::CMultipleVariable mvFillValue = 0);
	
				
		private:

			void Init();
			void Clean();

			bool SetFFTInfo(_In_ sFFTInfo* pFFTOrginInfo);

			int CalculatePixelSizeByte(_In_opt_ int nChannels = 0, _In_opt_ int nDepth = 0);
			int CalculateWidthStep(_In_ ptrdiff_t nSizeX, _In_ int nPixelSizeByte, _In_ int nAlignBytes);

			bool CreateOffsetTable();
			bool ConfigurateIplImage();

			CInternalRavidImage* m_pInternal = nullptr;
		};
	}
}
