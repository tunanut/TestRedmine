#pragma once

#include "RavidLine.h"
#include "RavidQuadrangle.h"
#include "RavidCircle.h"
#include "RavidEllipse.h"
#include "RavidPolygon.h"

namespace Ravid
{
	namespace Miscellaneous
	{
		class CInternalDxfReader;

		class AFX_EXT_CLASS CDxfReader : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CDxfReader);

		public:
			CDxfReader(void);
			virtual ~CDxfReader(void);

			bool IsLoaded();

			virtual bool Load(_In_ LPCTSTR lpszFileName);
			virtual bool Clear();

			std::tuple<CString, CRavidPolygon> GetSpline(_In_ int nIndex);
			size_t GetSplineCount();

			std::tuple<CString, CRavidPolygon> GetPolyline(_In_ int nIndex);
			size_t GetPolylineCount();

			std::tuple<CString, CRavidCircle<double> > GetArc(_In_ int nIndex);
			size_t GetArcCount();

			std::tuple<CString, CRavidCircle<double> > GetCircle(_In_ int nIndex);
			size_t GetCircleCount();

			std::tuple<CString, CRavidLine<double> > GetLine(_In_ int nIndex);
			size_t GetLineCount();

			std::tuple<CString, CRavidQuadrangle<double> > GetSolid(_In_ int nIndex);
			size_t GetSolidCount();

		private:
			CInternalDxfReader* m_pInternal = nullptr;


			
		};
	}
}

