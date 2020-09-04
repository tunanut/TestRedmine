#pragma once

#include <vector>

namespace Ravid
{
	namespace Miscellaneous
	{
		class AFX_EXT_CLASS CFileUtility : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CFileUtility);

		public:
			CFileUtility();
			virtual ~CFileUtility();

			// FindFile function : Find the file that you want in the directory.
			//  lpszFindingFileName : To find file name.  e.g. "C:\\Temp\\*.txt"
			//  pVctFoundFile : Result container for found files.
			//  bRecursive : If the value is true, the function makes a search including its sub-directory.
			bool FindFile(_In_ CString strFindingFileName, _Out_ std::vector<CString>* pVctFoundFile, _In_opt_ bool bRecursive = true);

			bool IsFolderExist(_In_ CString strFolderName);

			// The function is able to make over 2-depth at once.
			bool CreateFolder(_In_ CString strFolderName);

			bool DeleteFile(_In_ CString strFile);

			bool CopyFile(_In_ CString strSrcFile, _In_ CString strDstFile);
		};
	}
}

