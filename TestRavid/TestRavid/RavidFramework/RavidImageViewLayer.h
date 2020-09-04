#pragma once

#include "RavidObjectEx.h"

#include "../RavidCore/RavidPoint.h"
#include "../RavidCore/RavidRect.h"

#include <vector>

#include <d2d1_1.h>

namespace Ravid
{
	namespace Framework
	{
		class CRavidImageView;
		class CRavidImageViewLayerElement;
		class CViewObjectElement;

		class AFX_EXT_CLASS CRavidImageViewLayer : public CRavidObjectEx
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CRavidImageViewLayer);

		public:
			CRavidImageViewLayer(CRavidObjectEx* pParentView = nullptr);
			virtual ~CRavidImageViewLayer();

			void Clear();

			bool DrawShape(_In_ CRavidGeometry& rgObject, _In_opt_ COLORREF crLineColor = 0, _In_opt_ long nLineWidth = 1, _In_opt_ COLORREF crFillColor = ERavidImageViewLayerTransparencyColor, _In_opt_ ERavidImageViewPenStyle ePenStyle = ERavidImageViewPenStyle_SOLID, _In_opt_ float fLineColorAlphaRatio = 1.f, _In_opt_ float fFillColorAlphaRatio = 1.f);
			bool DrawShape(_In_ CRavidGeometry* pRgObject, _In_opt_ COLORREF crLineColor = 0, _In_opt_ long nLineWidth = 1, _In_opt_ COLORREF crFillColor = ERavidImageViewLayerTransparencyColor, _In_opt_ ERavidImageViewPenStyle ePenStyle = ERavidImageViewPenStyle_SOLID, _In_opt_ float fLineColorAlphaRatio = 1.f, _In_opt_ float fFillColorAlphaRatio = 1.f);

			bool DrawText(_In_ CRavidGeometry& rgObject, _In_ CString strText, _In_opt_ COLORREF crTextColor = 0, _In_opt_ COLORREF crFillColor = ERavidImageViewLayerTransparencyColor, _In_opt_ long nFontSize = 12, _In_opt_ bool bRealSize = false, _In_opt_ double dblAngle = 0., _In_opt_ DWORD dwAlign = TA_LEFT | TA_TOP, _In_opt_ CString* pFontName = nullptr, _In_opt_ float fTextColorAlphaRatio = 1.f, _In_opt_ float fFillColorAlphaRatio = 1.f);
			bool DrawText(_In_ CRavidGeometry* pRgObject, _In_ CString strText, _In_opt_ COLORREF crTextColor = 0, _In_opt_ COLORREF crFillColor = ERavidImageViewLayerTransparencyColor, _In_opt_ long nFontSize = 12, _In_opt_ bool bRealSize = false, _In_opt_ double dblAngle = 0., _In_opt_ DWORD dwAlign = TA_LEFT | TA_TOP, _In_opt_ CString* pFontName = nullptr, _In_opt_ float fTextColorAlphaRatio = 1.f, _In_opt_ float fFillColorAlphaRatio = 1.f);

			void Show(_In_ bool bShow);
			bool IsShowing();

			CSize GetTextExtent(_In_ CString strText, _In_opt_ long nFontSize = 12, _In_opt_ bool bRealSize = false, _In_opt_ double dblAngle = 0., _In_opt_ CString* pFontName = nullptr);

			bool GetLayerShapeElement(_Out_ std::vector<CRavidImageViewLayerElement*>* pVctLayerShapeElement);
			bool GetLayerTextElement(_Out_ std::vector<CRavidImageViewLayerElement*>* pVctLayerTextElement);

			bool Copy(_In_ CRavidImageViewLayer* pSrcLayer);

		protected:

			bool InternalDraw(_In_ CDC* pDC, _In_ CRavidPoint<double> frpOffset, _In_ double fScale, _In_ CRavidRect<int> rreWindowRect);

			bool InternalDrawText(_In_ CDC* pDC, _In_ CRavidImageViewLayerElement* pRIVLE);
			bool InternalDrawPoint(_In_ CDC* pDC, _In_ CRavidImageViewLayerElement* pRIVLE);
			bool InternalDrawLine(_In_ CDC* pDC, _In_ CRavidImageViewLayerElement* pRIVLE);
			bool InternalDrawRectangle(_In_ CDC* pDC, _In_ CRavidImageViewLayerElement* pRIVLE);
			bool InternalDrawQuadrangle(_In_ CDC* pDC, _In_ CRavidImageViewLayerElement* pRIVLE);
			bool InternalDrawCircle(_In_ CDC* pDC, _In_ CRavidImageViewLayerElement* pRIVLE);
			bool InternalDrawEllipse(_In_ CDC* pDC, _In_ CRavidImageViewLayerElement* pRIVLE);
			bool InternalDrawPolygon(_In_ CDC* pDC, _In_ CRavidImageViewLayerElement* pRIVLE);

			bool InternalDraw(_In_ CDC* pDC, _In_ ID2D1RenderTarget* pRender, _In_ CRavidPoint<double> frpOffset, _In_ double fScale, _In_ CRavidRect<int> rreWindowRect);

			bool InternalDrawText(_In_ CDC* pDC, _In_ ID2D1RenderTarget* pRender, _In_ CRavidImageViewLayerElement* pRIVLE);
			bool InternalDrawShape(_In_ CDC* pDC,_In_ ID2D1RenderTarget* pRender, _In_ CRavidImageViewLayerElement* pRIVLE);

			CRavidPoint<int> ImageCoordToScreenCoord(_In_ double fX, _In_ double fY);
			CRavidPoint<int> ImageCoordToScreenCoord(_In_ CRavidPoint<double>* pRpPoint);
			CRavidPoint<double> ScreenCoordToImageCoord(_In_ long nX, _In_ long nY);
			CRavidPoint<double> ScreenCoordToImageCoord(_In_ CRavidPoint<int>* pRpPoint);

			CRavidRect<int> ImageCoordToScreenCoord(_In_ double& fLeft, _In_ double& fTop, _In_ double& fRight, _In_ double& fBottom);
			CRavidRect<int> ImageCoordToScreenCoord(_In_ CRavidRect<double>* pRrRect);
			CRavidRect<double> ScreenCoordToImageCoord(_In_ long nLeft, _In_ long nTop, _In_ long nRight, _In_ long nBottom);
			CRavidRect<double> ScreenCoordToImageCoord(_In_ CRavidRect<int>* pRrRect);

			int InternalSamplingCircle(_In_ CRavidCircle<double>* pCircle, _Out_ POINT** ppResult);
			int InternalSamplingCircle(_In_ CRavidCircle<double>* pCircle, _Out_ std::vector<POINT>* pResult);

			int InternalSamplingEllipse(_In_ CRavidEllipse<double>* pEllipse, _Out_ POINT** ppResult);
			int InternalSamplingEllipse(_In_ CRavidEllipse<double>* pEllipse, _Out_ std::vector<POINT>* pResult);

			CRavidObjectEx* GetParentView();

			int __fastcall GetWidthBytes(_In_ int nCx);

			bool ApplyExclusiveRegion(_In_ CRavidGeometryArray* pExclusiveRGA, _Inout_ ID2D1PathGeometry* pD2DGeometry);

			ID2D1Geometry* MakeD2DGeometry(_In_ CRavidGeometry* pRG);

			bool FigureD2DSink(_In_ CRavidGeometry* pRG, _Inout_ ID2D1GeometrySink* pSink);

		protected:
			friend class CRavidImageView;
			friend class CRavidThumbnailView;
			friend class CViewObjectElement;

		protected:
			std::vector<CRavidImageViewLayerElement*> m_vctItems;

			CRavidObjectEx* m_pParentView = nullptr;

			CRavidPoint<double> m_rpOffset;
			double m_fScale = 1.;
			CRavidRect<int> m_rreWindowRect;
			CRavidRect<double> m_rreWindowRectImage;

			bool m_bShow = true;
		};
	}
}

