#pragma once

#include "RavidGeometryArray.h"

#include <vector>

class AFX_EXT_CLASS CRavidPolygon : public CRavidGeometryArray
{
public:
	RavidUseDynamicCreation(this);


	CRavidPolygon();
	virtual ~CRavidPolygon();

	//////////////////////////////////////////////////////////////////////////
	// Copy constructor
	CRavidPolygon(_In_ const CRavidPolygon& poly);
	CRavidPolygon(_In_ CRavidPolygon* pPoly);


	//////////////////////////////////////////////////////////////////////////
	// Object type
	enum EObjectType
	{
		EObjectType_Polygon = 0,
		EObjectType_ClosedPolyline,
		EObjectType_OpenPolyline,
	};

	void SetObjectType(_In_ EObjectType eType);
	EObjectType GetObjectType();

	virtual double GetCircumference();

	//////////////////////////////////////////////////////////////////////////
	// Assignment operator
	CRavidPolygon& operator=(_In_ const CRavidPolygon& poly);
	CRavidPolygon& operator=(_In_ CRavidPolygon* pPoly);
	//////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////
	// Arithmetic and assignment operator
	virtual void operator+=(_In_ const int& value);
	virtual void operator+=(_In_ const long long& value);
	virtual void operator+=(_In_ const float& value);
	virtual void operator+=(_In_ const double& value);
	virtual void operator+=(_In_ const POINT& point);
	virtual void operator+=(_In_ const SIZE& size);
	virtual void operator+=(_In_ const CRavidPoint<int>& point);
	virtual void operator+=(_In_ const CRavidPoint<long long>& point);
	virtual void operator+=(_In_ const CRavidPoint<float>& point);
	virtual void operator+=(_In_ const CRavidPoint<double>& point);

	virtual void operator-=(_In_ const int& value);
	virtual void operator-=(_In_ const long long& value);
	virtual void operator-=(_In_ const float& value);
	virtual void operator-=(_In_ const double& value);
	virtual void operator-=(_In_ const POINT& point);
	virtual void operator-=(_In_ const SIZE& size);
	virtual void operator-=(_In_ const CRavidPoint<int>& point);
	virtual void operator-=(_In_ const CRavidPoint<long long>& point);
	virtual void operator-=(_In_ const CRavidPoint<float>& point);
	virtual void operator-=(_In_ const CRavidPoint<double>& point);

	virtual void operator*=(_In_ const int& value);
	virtual void operator*=(_In_ const long long& value);
	virtual void operator*=(_In_ const float& value);
	virtual void operator*=(_In_ const double& value);
	virtual void operator*=(_In_ const POINT& point);
	virtual void operator*=(_In_ const SIZE& size);
	virtual void operator*=(_In_ const CRavidPoint<int>& point);
	virtual void operator*=(_In_ const CRavidPoint<long long>& point);
	virtual void operator*=(_In_ const CRavidPoint<float>& point);
	virtual void operator*=(_In_ const CRavidPoint<double>& point);

	virtual void operator/=(_In_ const int& value);
	virtual void operator/=(_In_ const long long& value);
	virtual void operator/=(_In_ const float& value);
	virtual void operator/=(_In_ const double& value);
	virtual void operator/=(_In_ const POINT& point);
	virtual void operator/=(_In_ const SIZE& size);
	virtual void operator/=(_In_ const CRavidPoint<int>& point);
	virtual void operator/=(_In_ const CRavidPoint<long long>& point);
	virtual void operator/=(_In_ const CRavidPoint<float>& point);
	virtual void operator/=(_In_ const CRavidPoint<double>& point);
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Arithmetic operator
	CRavidPolygon operator+(_In_ const POINT& point);
	CRavidPolygon operator+(_In_ const SIZE& size);
	CRavidPolygon operator+(_In_ const CRavidPoint<int>& point);
	CRavidPolygon operator+(_In_ const CRavidPoint<long long>& point);
	CRavidPolygon operator+(_In_ const CRavidPoint<float>& point);
	CRavidPolygon operator+(_In_ const CRavidPoint<double>& point);

	CRavidPolygon operator-(_In_ const POINT& point);
	CRavidPolygon operator-(_In_ const SIZE& size);
	CRavidPolygon operator-(_In_ const CRavidPoint<int>& point);
	CRavidPolygon operator-(_In_ const CRavidPoint<long long>& point);
	CRavidPolygon operator-(_In_ const CRavidPoint<float>& point);
	CRavidPolygon operator-(_In_ const CRavidPoint<double>& point);
	//////////////////////////////////////////////////////////////////////////

	virtual bool Add(_In_ CRavidGeometry& geometry);
	virtual bool Add(_In_ CRavidGeometry* pGeometry);
	//////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////
	// Casting operator
	virtual operator POINT();
	virtual operator CPoint();
	virtual operator RECT();
	virtual operator CRect();
	//////////////////////////////////////////////////////////////////////////

	CRavidRect<double> GetRect();

	virtual POINT GetPointStruct() override;
	virtual RECT GetRectStruct() override;

	virtual ERavidGeometryShapeType GetShapeType();
	virtual ERavidGeometryTemplateType GetTemplateType();

	virtual CRavidGeometry* MakeDifferentTemplateType(_In_ ERavidGeometryTemplateType eType);

	virtual bool __fastcall IsValid() override;

	virtual bool IsShapeValid() override;

	CRavidPoint<double> GetCenter();
	virtual bool GetCenter(_Out_ int& x, _Out_ int& y) override;
	virtual bool GetCenter(_Out_ int* x, _Out_ int* y) override;
	virtual bool GetCenter(_Out_ long long& x, _Out_ long long& y) override;
	virtual bool GetCenter(_Out_ long long* x, _Out_ long long* y) override;
	virtual bool GetCenter(_Out_ float& x, _Out_ float& y) override;
	virtual bool GetCenter(_Out_ float* x, _Out_ float* y) override;
	virtual bool GetCenter(_Out_ double& x, _Out_ double& y) override;
	virtual bool GetCenter(_Out_ double* x, _Out_ double* y) override;
	virtual bool GetCenter(_Out_ POINT& point) override;
	virtual bool GetCenter(_Out_ POINT* pPoint) override;
	virtual bool GetCenter(_Out_ SIZE& size) override;
	virtual bool GetCenter(_Out_ SIZE* pSize) override;
	virtual bool GetCenter(_Out_ CRavidPoint<int>& point) override;
	virtual bool GetCenter(_Out_ CRavidPoint<int>* pPoint) override;
	virtual bool GetCenter(_Out_ CRavidPoint<long long>& point) override;
	virtual bool GetCenter(_Out_ CRavidPoint<long long>* pPoint) override;
	virtual bool GetCenter(_Out_ CRavidPoint<float>& point) override;
	virtual bool GetCenter(_Out_ CRavidPoint<float>* pPoint) override;
	virtual bool GetCenter(_Out_ CRavidPoint<double>& point) override;
	virtual bool GetCenter(_Out_ CRavidPoint<double>* pPoint) override;

	virtual bool GetCenterOfGravity(_Out_ int& x, _Out_ int& y) override;
	virtual bool GetCenterOfGravity(_Out_ int* x, _Out_ int* y) override;
	virtual bool GetCenterOfGravity(_Out_ long long& x, _Out_ long long& y) override;
	virtual bool GetCenterOfGravity(_Out_ long long* x, _Out_ long long* y) override;
	virtual bool GetCenterOfGravity(_Out_ float& x, _Out_ float& y) override;
	virtual bool GetCenterOfGravity(_Out_ float* x, _Out_ float* y) override;
	virtual bool GetCenterOfGravity(_Out_ double& x, _Out_ double& y) override;
	virtual bool GetCenterOfGravity(_Out_ double* x, _Out_ double* y) override;
	virtual bool GetCenterOfGravity(_Out_ POINT& point) override;
	virtual bool GetCenterOfGravity(_Out_ POINT* pPoint) override;
	virtual bool GetCenterOfGravity(_Out_ SIZE& size) override;
	virtual bool GetCenterOfGravity(_Out_ SIZE* pSize) override;
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<int>& point) override;
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<int>* pPoint) override;
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<long long>& point) override;
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<long long>* pPoint) override;
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<float>& point) override;
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<float>* pPoint) override;
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<double>& point) override;
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<double>* pPoint) override;

	virtual bool GetRect(_Out_ int& left, _Out_ int& top, _Out_ int& right, _Out_ int& bottom) override;
	virtual bool GetRect(_Out_ int* pLeft, _Out_ int* pTop, _Out_ int* pRight, _Out_ int* pBottom) override;
	virtual bool GetRect(_Out_ long long& left, _Out_ long long& top, _Out_ long long& right, _Out_ long long& bottom) override;
	virtual bool GetRect(_Out_ long long* pLeft, _Out_ long long* pTop, _Out_ long long* pRight, _Out_ long long* pBottom) override;
	virtual bool GetRect(_Out_ float& left, _Out_ float& top, _Out_ float& right, _Out_ float& bottom) override;
	virtual bool GetRect(_Out_ float* pLeft, _Out_ float* pTop, _Out_ float* pRight, _Out_ float* pBottom) override;
	virtual bool GetRect(_Out_ double& left, _Out_ double& top, _Out_ double& right, _Out_ double& bottom) override;
	virtual bool GetRect(_Out_ double* pLeft, _Out_ double* pTop, _Out_ double* pRight, _Out_ double* pBottom) override;
	virtual bool GetRect(_Out_ RECT& rect) override;
	virtual bool GetRect(_Out_ RECT* pRect) override;
	virtual bool GetRect(_Out_ CRavidRect<int>& rect) override;
	virtual bool GetRect(_Out_ CRavidRect<int>* pRect) override;
	virtual bool GetRect(_Out_ CRavidRect<long long>& rect) override;
	virtual bool GetRect(_Out_ CRavidRect<long long>* pRect) override;
	virtual bool GetRect(_Out_ CRavidRect<float>& rect) override;
	virtual bool GetRect(_Out_ CRavidRect<float>* pRect) override;
	virtual bool GetRect(_Out_ CRavidRect<double>& rect) override;
	virtual bool GetRect(_Out_ CRavidRect<double>* pRect) override;

	virtual bool Offset(_In_ int x, _In_ int y) override;
	virtual bool Offset(_In_ long long x, _In_ long long y) override;
	virtual bool Offset(_In_ float x, _In_ float y) override;
	virtual bool Offset(_In_ double x, _In_ double y) override;
	virtual bool Offset(_In_ POINT& point) override;
	virtual bool Offset(_In_ POINT* pPoint) override;
	virtual bool Offset(_In_ SIZE& size) override;
	virtual bool Offset(_In_ SIZE* pSize) override;
	virtual bool Offset(_In_ CRavidPoint<int>& point) override;
	virtual bool Offset(_In_ CRavidPoint<int>* pPoint) override;
	virtual bool Offset(_In_ CRavidPoint<long long>& point) override;
	virtual bool Offset(_In_ CRavidPoint<long long>* pPoint) override;
	virtual bool Offset(_In_ CRavidPoint<float>& point) override;
	virtual bool Offset(_In_ CRavidPoint<float>* pPoint) override;
	virtual bool Offset(_In_ CRavidPoint<double>& point) override;
	virtual bool Offset(_In_ CRavidPoint<double>* pPoint) override;

	virtual bool PowOffset(_In_ double powX, _In_ double powY) override;

	virtual double GetArea() override;

	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidPoint<int>* pRpImageSize = nullptr) override;
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidPoint<int>* pRpImageSize = nullptr) override;
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidRect<int>* pRrImageSize) override;
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidRect<int>* pRrImageSize) override;

	virtual double GetAngle() override;

	virtual bool Inflate(_In_ int left, _In_ int top, _In_ int right, _In_ int bottom) override;
	virtual bool Inflate(_In_ long long left, _In_ long long top, _In_ long long right, _In_ long long bottom) override;
	virtual bool Inflate(_In_ float left, _In_ float top, _In_ float right, _In_ float bottom) override;
	virtual bool Inflate(_In_ double left, _In_ double top, _In_ double right, _In_ double bottom) override;
	virtual bool Inflate(_In_ int width, _In_ int height) override;
	virtual bool Inflate(_In_ long long width, _In_ long long height) override;
	virtual bool Inflate(_In_ float width, _In_ float height) override;
	virtual bool Inflate(_In_ double width, _In_ double height) override;
	virtual bool Inflate(_In_ POINT& point) override;
	virtual bool Inflate(_In_ POINT* pPoint) override;
	virtual bool Inflate(_In_ SIZE& size) override;
	virtual bool Inflate(_In_ SIZE* pSize) override;
	virtual bool Inflate(_In_ CRavidPoint<int>& point) override;
	virtual bool Inflate(_In_ CRavidPoint<int>* pPoint) override;
	virtual bool Inflate(_In_ CRavidPoint<long long>& point) override;
	virtual bool Inflate(_In_ CRavidPoint<long long>* pPoint) override;
	virtual bool Inflate(_In_ CRavidPoint<float>& point) override;
	virtual bool Inflate(_In_ CRavidPoint<float>* pPoint) override;
	virtual bool Inflate(_In_ CRavidPoint<double>& point) override;
	virtual bool Inflate(_In_ CRavidPoint<double>* pPoint) override;
	virtual bool Inflate(_In_ RECT& rect) override;
	virtual bool Inflate(_In_ RECT* pRect) override;
	virtual bool Inflate(_In_ CRavidRect<int>& rect) override;
	virtual bool Inflate(_In_ CRavidRect<int>* pRect) override;
	virtual bool Inflate(_In_ CRavidRect<long long>& rect) override;
	virtual bool Inflate(_In_ CRavidRect<long long>* pRect) override;
	virtual bool Inflate(_In_ CRavidRect<float>& rect) override;
	virtual bool Inflate(_In_ CRavidRect<float>* pRect) override;
	virtual bool Inflate(_In_ CRavidRect<double>& rect) override;
	virtual bool Inflate(_In_ CRavidRect<double>* pRect) override;

	virtual bool Deflate(_In_ int left, _In_ int top, _In_ int right, _In_ int bottom) override;
	virtual bool Deflate(_In_ long long left, _In_ long long top, _In_ long long right, _In_ long long bottom) override;
	virtual bool Deflate(_In_ float left, _In_ float top, _In_ float right, _In_ float bottom) override;
	virtual bool Deflate(_In_ double left, _In_ double top, _In_ double right, _In_ double bottom) override;
	virtual bool Deflate(_In_ int width, _In_ int height) override;
	virtual bool Deflate(_In_ long long width, _In_ long long height) override;
	virtual bool Deflate(_In_ float width, _In_ float height) override;
	virtual bool Deflate(_In_ double width, _In_ double height) override;
	virtual bool Deflate(_In_ POINT& point) override;
	virtual bool Deflate(_In_ POINT* pPoint) override;
	virtual bool Deflate(_In_ SIZE& size) override;
	virtual bool Deflate(_In_ SIZE* pSize) override;
	virtual bool Deflate(_In_ CRavidPoint<int>& point) override;
	virtual bool Deflate(_In_ CRavidPoint<int>* pPoint) override;
	virtual bool Deflate(_In_ CRavidPoint<long long>& point) override;
	virtual bool Deflate(_In_ CRavidPoint<long long>* pPoint) override;
	virtual bool Deflate(_In_ CRavidPoint<float>& point) override;
	virtual bool Deflate(_In_ CRavidPoint<float>* pPoint) override;
	virtual bool Deflate(_In_ CRavidPoint<double>& point) override;
	virtual bool Deflate(_In_ CRavidPoint<double>* pPoint) override;
	virtual bool Deflate(_In_ RECT& rect) override;
	virtual bool Deflate(_In_ RECT* pRect) override;
	virtual bool Deflate(_In_ CRavidRect<int>& rect) override;
	virtual bool Deflate(_In_ CRavidRect<int>* pRect) override;
	virtual bool Deflate(_In_ CRavidRect<long long>& rect) override;
	virtual bool Deflate(_In_ CRavidRect<long long>* pRect) override;
	virtual bool Deflate(_In_ CRavidRect<float>& rect) override;
	virtual bool Deflate(_In_ CRavidRect<float>* pRect) override;
	virtual bool Deflate(_In_ CRavidRect<double>& rect) override;
	virtual bool Deflate(_In_ CRavidRect<double>* pRect) override;

	bool DoesIntersect(_In_ CRavidPoint<int>& point);
	bool DoesIntersect(_In_ CRavidPoint<int>* pPoint);
	bool DoesIntersect(_In_ CRavidPoint<long long>& point);
	bool DoesIntersect(_In_ CRavidPoint<long long>* pPoint);
	bool DoesIntersect(_In_ CRavidPoint<float>& point);
	bool DoesIntersect(_In_ CRavidPoint<float>* pPoint);
	bool DoesIntersect(_In_ CRavidPoint<double>& point);
	bool DoesIntersect(_In_ CRavidPoint<double>* pPoint);
	bool DoesIntersect(_In_ CRavidLine<int>& line);
	bool DoesIntersect(_In_ CRavidLine<int>* pLine);
	bool DoesIntersect(_In_ CRavidLine<long long>& line);
	bool DoesIntersect(_In_ CRavidLine<long long>* pLine);
	bool DoesIntersect(_In_ CRavidLine<float>& line);
	bool DoesIntersect(_In_ CRavidLine<float>* pLine);
	bool DoesIntersect(_In_ CRavidLine<double>& line);
	bool DoesIntersect(_In_ CRavidLine<double>* pLine);
	bool DoesIntersect(_In_ CRavidRect<int>& rect);
	bool DoesIntersect(_In_ CRavidRect<int>* pRect);
	bool DoesIntersect(_In_ CRavidRect<long long>& rect);
	bool DoesIntersect(_In_ CRavidRect<long long>* pRect);
	bool DoesIntersect(_In_ CRavidRect<float>& rect);
	bool DoesIntersect(_In_ CRavidRect<float>* pRect);
	bool DoesIntersect(_In_ CRavidRect<double>& rect);
	bool DoesIntersect(_In_ CRavidRect<double>* pRect);
	bool DoesIntersect(_In_ CRavidQuadrangle<int>& quad);
	bool DoesIntersect(_In_ CRavidQuadrangle<int>* pQuad);
	bool DoesIntersect(_In_ CRavidQuadrangle<long long>& quad);
	bool DoesIntersect(_In_ CRavidQuadrangle<long long>* pQuad);
	bool DoesIntersect(_In_ CRavidQuadrangle<float>& quad);
	bool DoesIntersect(_In_ CRavidQuadrangle<float>* pQuad);
	bool DoesIntersect(_In_ CRavidQuadrangle<double>& quad);
	bool DoesIntersect(_In_ CRavidQuadrangle<double>* pQuad);
	bool DoesIntersect(_In_ CRavidCircle<int>& cir);
	bool DoesIntersect(_In_ CRavidCircle<int>* pCir);
	bool DoesIntersect(_In_ CRavidCircle<long long>& cir);
	bool DoesIntersect(_In_ CRavidCircle<long long>* pCir);
	bool DoesIntersect(_In_ CRavidCircle<float>& cir);
	bool DoesIntersect(_In_ CRavidCircle<float>* pCir);
	bool DoesIntersect(_In_ CRavidCircle<double>& cir);
	bool DoesIntersect(_In_ CRavidCircle<double>* pCir);
	bool DoesIntersect(_In_ CRavidEllipse<int>& ell);
	bool DoesIntersect(_In_ CRavidEllipse<int>* pEll);
	bool DoesIntersect(_In_ CRavidEllipse<long long>& ell);
	bool DoesIntersect(_In_ CRavidEllipse<long long>* pEll);
	bool DoesIntersect(_In_ CRavidEllipse<float>& ell);
	bool DoesIntersect(_In_ CRavidEllipse<float>* pEll);
	bool DoesIntersect(_In_ CRavidEllipse<double>& ell);
	bool DoesIntersect(_In_ CRavidEllipse<double>* pEll);
	bool DoesIntersect(_In_ CRavidPolygon& rpg);
	bool DoesIntersect(_In_ CRavidPolygon* pRpg);

	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<int>& rect);
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<int>* pRect);
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<long long>& rect);
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<long long>* pRect);
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<float>& rect);
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<float>* pRect);
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<double>& rect);
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<double>* pRect);
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<int>& quad);
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<int>* pQuad);
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<long long>& quad);
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<long long>* pQuad);
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<float>& quad);
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<float>* pQuad);
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<double>& quad);
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<double>* pQuad);
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<int>& cir);
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<int>* pCir);
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<long long>& cir);
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<long long>* pCir);
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<float>& cir);
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<float>* pCir);
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<double>& cir);
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<double>* pCir);
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<int>& ell);
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<int>* pEll);
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<long long>& ell);
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<long long>* pEll);
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<float>& ell);
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<float>* pEll);
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<double>& ell);
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<double>* pEll);
	bool DoesIgnoreInternalIntersection(_In_ CRavidPolygon& rpg);
	bool DoesIgnoreInternalIntersection(_In_ CRavidPolygon* pRpg);

	bool GetIntersection(_In_ CRavidLine<int>& line, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidLine<int>* pLine, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidLine<long long>& line, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidLine<long long>* pLine, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidLine<float>& line, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidLine<float>* pLine, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidLine<double>& line, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidLine<double>* pLine, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidRect<int>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidRect<int>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidRect<long long>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidRect<long long>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidRect<float>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidRect<float>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidRect<double>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidRect<double>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidQuadrangle<int>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidQuadrangle<int>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidQuadrangle<long long>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidQuadrangle<long long>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidQuadrangle<float>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidQuadrangle<float>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidQuadrangle<double>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidQuadrangle<double>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidCircle<int>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidCircle<int>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidCircle<long long>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidCircle<long long>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidCircle<float>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidCircle<float>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidCircle<double>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidCircle<double>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidEllipse<int>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidEllipse<int>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidEllipse<long long>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidEllipse<long long>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidEllipse<float>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidEllipse<float>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidEllipse<double>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidEllipse<double>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidPolygon& rpg, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersection(_In_ CRavidPolygon* pRpg, _Out_ CRavidGeometryArray* pRga);

	bool GetIgnoreInternalIntersection(_In_ CRavidRect<int>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<int>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<long long>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<long long>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<float>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<float>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<double>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<double>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<int>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<int>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<long long>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<long long>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<float>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<float>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<double>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<double>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<int>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<int>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<long long>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<long long>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<float>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<float>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<double>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<double>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<int>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<int>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<long long>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<long long>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<float>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<float>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<double>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<double>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidPolygon& rpg, _Out_ CRavidGeometryArray* pRga);
	bool GetIgnoreInternalIntersection(_In_ CRavidPolygon* pRpg, _Out_ CRavidGeometryArray* pRga);

	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<int>& center) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<int>* pCenter) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<long long>& center) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<long long>* pCenter) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<float>& center) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<float>* pCenter) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<double>& center) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<double>* pCenter) override;

	bool GetIntersectionRegion(_In_ CRavidRect<int>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidRect<int>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidRect<long long>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidRect<long long>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidRect<float>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidRect<float>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidRect<double>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidRect<double>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<int>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<int>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<long long>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<long long>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<float>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<float>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<double>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<double>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidCircle<int>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidCircle<int>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidCircle<long long>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidCircle<long long>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidCircle<float>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidCircle<float>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidCircle<double>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidCircle<double>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidEllipse<int>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidEllipse<int>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidEllipse<long long>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidEllipse<long long>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidEllipse<float>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidEllipse<float>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidEllipse<double>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidEllipse<double>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidPolygon& rpg, _Out_ CRavidGeometryArray* pRga);
	bool GetIntersectionRegion(_In_ CRavidPolygon* pRpg, _Out_ CRavidGeometryArray* pRga);

	bool GetUnionRegion(_In_ CRavidRect<int>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidRect<int>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidRect<long long>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidRect<long long>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidRect<float>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidRect<float>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidRect<double>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidRect<double>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidQuadrangle<int>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidQuadrangle<int>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidQuadrangle<long long>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidQuadrangle<long long>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidQuadrangle<float>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidQuadrangle<float>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidQuadrangle<double>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidQuadrangle<double>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidCircle<int>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidCircle<int>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidCircle<long long>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidCircle<long long>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidCircle<float>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidCircle<float>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidCircle<double>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidCircle<double>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidEllipse<int>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidEllipse<int>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidEllipse<long long>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidEllipse<long long>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidEllipse<float>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidEllipse<float>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidEllipse<double>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidEllipse<double>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidPolygon& rpg, _Out_ CRavidGeometryArray* pRga);
	bool GetUnionRegion(_In_ CRavidPolygon* pRpg, _Out_ CRavidGeometryArray* pRga);

	bool GetSubtractionRegion(_In_ CRavidRect<int>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidRect<int>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidRect<long long>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidRect<long long>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidRect<float>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidRect<float>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidRect<double>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidRect<double>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<int>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<int>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<long long>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<long long>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<float>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<float>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<double>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<double>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidCircle<int>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidCircle<int>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidCircle<long long>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidCircle<long long>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidCircle<float>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidCircle<float>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidCircle<double>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidCircle<double>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidEllipse<int>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidEllipse<int>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidEllipse<long long>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidEllipse<long long>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidEllipse<float>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidEllipse<float>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidEllipse<double>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidEllipse<double>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidPolygon& rpg, _Out_ CRavidGeometryArray* pRga);
	bool GetSubtractionRegion(_In_ CRavidPolygon* pRpg, _Out_ CRavidGeometryArray* pRga);

	bool GetExclusiveOrRegion(_In_ CRavidRect<int>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidRect<int>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidRect<long long>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidRect<long long>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidRect<float>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidRect<float>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidRect<double>& rect, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidRect<double>* pRect, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<int>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<int>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<long long>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<long long>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<float>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<float>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<double>& quad, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<double>* pQuad, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidCircle<int>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidCircle<int>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidCircle<long long>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidCircle<long long>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidCircle<float>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidCircle<float>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidCircle<double>& cir, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidCircle<double>* pCir, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<int>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<int>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<long long>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<long long>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<float>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<float>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<double>& ell, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<double>* pEll, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidPolygon& rpg, _Out_ CRavidGeometryArray* pRga);
	bool GetExclusiveOrRegion(_In_ CRavidPolygon* pRpg, _Out_ CRavidGeometryArray* pRga);

	CRavidPolygon* MakeFullSegmentPolygon();

	bool GetIntersectionAboutRegion(_In_ CRavidPolygon* pRpg, _Out_ CRavidGeometryArray* pRga);

	CRavidPolygon* CurveCorrect();

	bool GetDirection();
	
private:
	struct RegionPoint
	{
		double x;
		double y;

		RegionPoint(_In_opt_ double x = 0, _In_opt_ double y = 0);
		RegionPoint(_In_ const CRavidPoint<double>& rp);

		bool operator==(_In_ const RegionPoint& ip) const;
		bool operator!=(_In_ const RegionPoint& ip) const;
	};

	// Main Region Function
	bool GetIntersectionPointAboutRegion(_In_ CRavidPolygon* pRpg, _Out_ std::vector<RegionPoint>& vctIP, _Out_ std::vector<std::vector<RegionPoint>>& vctIntersectionAboutRpg1, _Out_ std::vector<std::vector<RegionPoint>>& vctIntersectionAboutRpg2);
	bool GetUnionPointAboutRegion(_In_ CRavidPolygon* pRpg, _Out_ std::vector<RegionPoint>& vctSurfaceIntersection, _Out_ std::vector<RegionPoint>& vctInternalIntersection, _Out_ std::vector<std::vector<RegionPoint>>& vctUnionAboutRpg1, _Out_ std::vector<std::vector<RegionPoint>>& vctUnionAboutRpg2);
	bool GetSubtractionPointAboutRegion(_In_ CRavidPolygon* pRpg, _Out_ std::vector<RegionPoint>& vctSurfaceIntersection, _Out_ std::vector<RegionPoint>& vctInternalIntersection, _Out_ std::vector<std::vector<RegionPoint>>& vctSubtractionAboutRpg1, _Out_ std::vector<std::vector<RegionPoint>>& vctSubtractionAboutRpg2);

	EObjectType m_eObjectType = EObjectType_Polygon;

	bool GetIntersectionForRasterRegion(_In_ CRavidLine<double>* pLine, _Out_ CRavidGeometryArray* pRga);

protected:
	CRavidGeometryArray * m_pExclusiveRegion = nullptr;
};

