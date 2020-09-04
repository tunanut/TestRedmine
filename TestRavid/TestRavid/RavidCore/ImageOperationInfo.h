#pragma once

namespace Ravid
{
	namespace Framework
	{
		class Framework::CMultipleVariable;
	}

	namespace Algorithms
	{
		class CInterImageOperationInfo;
		class CRavidImage;

		class AFX_EXT_CLASS CImageOperationInfo : public CRavidObject
		{
		public:
			enum EOperationType
			{
				EOperationType_Add = 0,
				EOperationType_Subtract,
				EOperationType_Multiply,
				EOperationType_Divide,
				EOperationType_Modulo,
				EOperationType_ShiftLeft,
				EOperationType_ShiftRight,
				EOperationType_BitwiseAND,
				EOperationType_BitwiseOR,
				EOperationType_BitwiseXOR,
				EOperationType_LogicalAND,
				EOperationType_LogicalOR,
				EOperationType_LogicalXOR,
				EOperationType_Minimum,
				EOperationType_Maximum,
				EOperationType_Equal,
				EOperationType_NotEqual,
				EOperationType_GreaterOrEqual,
				EOperationType_LesserOrEqual,
				EOperationType_Greater,
				EOperationType_Lesser,
			};

			enum EDataType
			{
				EDataType_Const = 0,
				EDataType_Image,
			};

			CImageOperationInfo();
			virtual ~CImageOperationInfo();

			CImageOperationInfo(_In_ CImageOperationInfo& imgOper);
			CImageOperationInfo(_In_ CImageOperationInfo* pImgOper);
			CImageOperationInfo(_In_opt_ EOperationType eOperType, _In_opt_ EDataType eDataType, _In_ CRavidImage* pRI = nullptr, _In_ Framework::CMultipleVariable* pConst = nullptr);

			virtual void Clear();
			void Copy(_In_ CImageOperationInfo& imgOper);
			void Copy(_In_ CImageOperationInfo* pImgOper);

			void SetImageOperationInfo(_In_opt_ EOperationType eOperType, _In_opt_ EDataType eDataType, _In_ CRavidImage* pRI = nullptr, _In_ Framework::CMultipleVariable* pConst = nullptr);

			void SetImageOperationInfo(_In_opt_ EOperationType eOperType, _In_ Framework::CMultipleVariable* pConst);
			void SetImageOperationInfo(_In_opt_ EOperationType eOperType, _In_ CRavidImage* pRI);

			EOperationType GetOperationType();
			void SetOperationType(_In_opt_ EOperationType eOperType);

			EDataType GetDataType();
			void SetDataType(_In_opt_ EDataType eDataType);

			CRavidImage* GetImage();
			void SetImage(_In_ CRavidImage* pRI);

			Framework::CMultipleVariable* GetMultipleVariable();
			void SetMultipleVariable(_In_ Framework::CMultipleVariable* pConst);

		protected:
			CInterImageOperationInfo* m_pInternal = nullptr;
			
		};
	}
}
