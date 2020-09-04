#pragma once

#include "DefinitionsUI.h"

enum ERavidParameterDataType
{
	ERavidParameterDataType_Undefined = 0,
	ERavidParameterDataType_Char,
	ERavidParameterDataType_UnsingedChar,
	ERavidParameterDataType_Short,
	ERavidParameterDataType_UnsignedShort,
	ERavidParameterDataType_Long,
	ERavidParameterDataType_UnsignedLong,
	ERavidParameterDataType_LongLong,
	ERavidParameterDataType_UnsignedLongLong,
	ERavidParameterDataType_Float,
	ERavidParameterDataType_Double,
	ERavidParameterDataType_String,
	ERavidParameterDataType_Category,
	ERavidParameterDataType_Count,
};

enum ERavidParameterFieldName
{
	ERavidParameterFieldName_Sequence = 0,
	ERavidParameterFieldName_UniqueID,
	ERavidParameterFieldName_Depth,
	ERavidParameterFieldName_ParameterName,
	ERavidParameterFieldName_Data,
	ERavidParameterFieldName_Description,
	ERavidParameterFieldName_DataType,
	ERavidParameterFieldName_InputBoxType,
	ERavidParameterFieldName_ExtraData,
	ERavidParameterFieldName_DecimalCount,
	ERavidParameterFieldName_Count,
};

enum ERavidParameterFieldInputBoxType
{
	ERavidParameterFieldInputBoxType_None = 0,
	ERavidParameterFieldInputBoxType_Edit,
	ERavidParameterFieldInputBoxType_Static,
	ERavidParameterFieldInputBoxType_Combo,
	ERavidParameterFieldInputBoxType_Radio,
	ERavidParameterFieldInputBoxType_Check,
	ERavidParameterFieldInputBoxType_Spinner,
	ERavidParameterFieldInputBoxType_IPAddress,
};

typedef struct sRavidParameterElement
{
	int nSequence;
	unsigned long ulUniqueID;
	int nDepth;
	CString strParameterName;
	void* pData;
	CString strDescription;
	CString strDataType;
	ERavidParameterDataType eDataType;
	ERavidParameterFieldInputBoxType eInputBoxType;
	CString strExtraData;
	long nDecimalCount;

	sRavidParameterElement()
	{
		nSequence = 0;
		ulUniqueID = 0;
		nDepth = 0;
		strParameterName.Empty();
		pData = nullptr;
		strDescription.Empty();
		strDataType.Empty();
		eDataType = ERavidParameterDataType_Undefined;
		eInputBoxType = ERavidParameterFieldInputBoxType_None;
		strExtraData.Empty();
		nDecimalCount = 7;
	}
}
SRavidParameterElement;

typedef struct sRavidParameterInformation
{
	CString strModelType = _T("");
	CString strModelDescryption = _T("");
}
SRavidparameterInformation;

enum EModelTypeInfoTableField
{
	EModelTypeInfoTableField_Sequence = 0,
	EModelTypeInfoTableField_ModelType,
	EModelTypeInfoTableField_Description,
	EModelTypeInfoTableField_ConcurrentSize,
	EModelTypeInfoTableField_Count,
};

enum EModelConfigurationTableField
{
	EModelConfigurationTableField_Sequence = 0,
	EModelConfigurationTableField_UniqueID,
	EModelConfigurationTableField_Depth,
	EModelConfigurationTableField_Name,
	EModelConfigurationTableField_Description,
	EModelConfigurationTableField_DataType,
	EModelConfigurationTableField_VariableName,
	EModelConfigurationTableField_DefaultValue,
	EModelConfigurationTableField_InputBoxType,
	EModelConfigurationTableField_ExtraData,
	EModelConfigurationTableField_DecimalCount,
	EModelConfigurationTableField_Count,
};

typedef struct sModelTypeInfo
{
	long nSequence = 0;
	CString strModelType = _T("");
	CString strDescription = _T("");
	long nConcurrentSize = 0;
}
SModelTypeInfo;

class CRavidTreeViewItemStatic;

typedef struct sModelElementProperty
{
	unsigned long ulUniqueID = 0;
	long nDepth = 0;
	CString strName = _T("");
	CString strDescription = _T("");
	ERavidParameterDataType eRPDT = ERavidParameterDataType_Category;
	CString strVariableName = _T("");
	CString strDefaultValue = _T("");
	ERavidRavidTreeViewInputBoxType eOTIBT = ERavidRavidTreeViewInputBoxType_None;
	CString strExtraData = _T("");
	long nDecimalCount = 7;

	CRavidTreeViewItemStatic* pItem = nullptr;

	sModelElementProperty* pParentMEP = nullptr;
	std::vector<sModelElementProperty*> vctChildMEP;
}
SModelElementProperty;


// 모델 변수 생성용 키워드
#define ModelParam(TYPE,VARNAME) void* _RTTI_##VARNAME##_ = (type_info*)&typeid(TYPE); TYPE VARNAME;

// 배열형 모델 변수 생성용 키워드
#define ModelParamArray(TYPE,VARNAME,COUNT) void* _RTTI_##VARNAME##_ = (type_info*)&typeid(TYPE[COUNT]); TYPE VARNAME[COUNT];

