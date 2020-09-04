#pragma once

class CRavidGeometryArray;

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}
}

class AFX_EXT_CLASS CRavidGeometry : public CRavidObject
{
	RavidUseDynamicCreation();

public:
	CRavidGeometry();
	virtual ~CRavidGeometry();

	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray* pExclusiveRegion);
	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray& refExclusiveRegion);

	virtual bool AddExclusiveRegion(_In_ CRavidGeometry* pGeometry);
	virtual bool AddExclusiveRegion(_In_ CRavidGeometry& refGeometry);

	virtual CRavidGeometryArray* GetExclusiveRegion() const;

	virtual void ClearExclusiveRegion();

	virtual bool IsThereExclusiveRegion() const;

	virtual operator POINT();
	virtual operator CPoint();
	virtual operator RECT();
	virtual operator CRect();

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

	virtual POINT GetPointStruct();
	virtual RECT GetRectStruct();

	virtual bool __fastcall IsValid() override;

	virtual bool IsShapeValid();

	virtual ERavidGeometryShapeType GetShapeType();
	virtual ERavidGeometryTemplateType GetTemplateType();

	virtual CRavidGeometry* MakeDifferentTemplateType(ERavidGeometryTemplateType eType);

	virtual bool Inflate(_In_ int nRadius);
	virtual bool Inflate(_In_ long long llRadius);
	virtual bool Inflate(_In_ float fRadius);
	virtual bool Inflate(_In_ double dblRadius);
	virtual bool Inflate(_In_ int left, _In_ int top, _In_ int right, _In_ int bottom);
	virtual bool Inflate(_In_ long long left, _In_ long long top, _In_ long long right, _In_ long long bottom);
	virtual bool Inflate(_In_ float left, _In_ float top, _In_ float right, _In_ float bottom);
	virtual bool Inflate(_In_ double left, _In_ double top, _In_ double right, _In_ double bottom);
	virtual bool Inflate(_In_ int width, _In_ int height);
	virtual bool Inflate(_In_ long long width, _In_ long long height);
	virtual bool Inflate(_In_ float width, _In_ float height);
	virtual bool Inflate(_In_ double width, _In_ double height);
	virtual bool Inflate(_In_ POINT& point);
	virtual bool Inflate(_In_ POINT* pPoint);
	virtual bool Inflate(_In_ SIZE& size);
	virtual bool Inflate(_In_ SIZE* pSize);
	virtual bool Inflate(_In_ CRavidPoint<int>& point);
	virtual bool Inflate(_In_ CRavidPoint<int>* pPoint);
	virtual bool Inflate(_In_ CRavidPoint<long long>& point);
	virtual bool Inflate(_In_ CRavidPoint<long long>* pPoint);
	virtual bool Inflate(_In_ CRavidPoint<float>& point);
	virtual bool Inflate(_In_ CRavidPoint<float>* pPoint);
	virtual bool Inflate(_In_ CRavidPoint<double>& point);
	virtual bool Inflate(_In_ CRavidPoint<double>* pPoint);
	virtual bool Inflate(_In_ RECT& rect);
	virtual bool Inflate(_In_ RECT* pRect);
	virtual bool Inflate(_In_ CRavidRect<int>& rect);
	virtual bool Inflate(_In_ CRavidRect<int>* pRect);
	virtual bool Inflate(_In_ CRavidRect<long long>& rect);
	virtual bool Inflate(_In_ CRavidRect<long long>* pRect);
	virtual bool Inflate(_In_ CRavidRect<float>& rect);
	virtual bool Inflate(_In_ CRavidRect<float>* pRect);
	virtual bool Inflate(_In_ CRavidRect<double>& rect);
	virtual bool Inflate(_In_ CRavidRect<double>* pRect);

	virtual bool Deflate(_In_ int nRadius);
	virtual bool Deflate(_In_ long long llRadius);
	virtual bool Deflate(_In_ float fRadius);
	virtual bool Deflate(_In_ double dblRadius);
	virtual bool Deflate(_In_ int left, _In_ int top, _In_ int right, _In_ int bottom);
	virtual bool Deflate(_In_ long long left, _In_ long long top, _In_ long long right, _In_ long long bottom);
	virtual bool Deflate(_In_ float left, _In_ float top, _In_ float right, _In_ float bottom);
	virtual bool Deflate(_In_ double left, _In_ double top, _In_ double right, _In_ double bottom);
	virtual bool Deflate(_In_ int width, _In_ int height);
	virtual bool Deflate(_In_ long long width, _In_ long long height);
	virtual bool Deflate(_In_ float width, _In_ float height);
	virtual bool Deflate(_In_ double width, _In_ double height);
	virtual bool Deflate(_In_ POINT& point);
	virtual bool Deflate(_In_ POINT* pPoint);
	virtual bool Deflate(_In_ SIZE& size);
	virtual bool Deflate(_In_ SIZE* pSize);
	virtual bool Deflate(_In_ CRavidPoint<int>& point);
	virtual bool Deflate(_In_ CRavidPoint<int>* pPoint);
	virtual bool Deflate(_In_ CRavidPoint<long long>& point);
	virtual bool Deflate(_In_ CRavidPoint<long long>* pPoint);
	virtual bool Deflate(_In_ CRavidPoint<float>& point);
	virtual bool Deflate(_In_ CRavidPoint<float>* pPoint);
	virtual bool Deflate(_In_ CRavidPoint<double>& point);
	virtual bool Deflate(_In_ CRavidPoint<double>* pPoint);
	virtual bool Deflate(_In_ RECT& rect);
	virtual bool Deflate(_In_ RECT* pRect);
	virtual bool Deflate(_In_ CRavidRect<int>& rect);
	virtual bool Deflate(_In_ CRavidRect<int>* pRect);
	virtual bool Deflate(_In_ CRavidRect<long long>& rect);
	virtual bool Deflate(_In_ CRavidRect<long long>* pRect);
	virtual bool Deflate(_In_ CRavidRect<float>& rect);
	virtual bool Deflate(_In_ CRavidRect<float>* pRect);
	virtual bool Deflate(_In_ CRavidRect<double>& rect);
	virtual bool Deflate(_In_ CRavidRect<double>* pRect);

	virtual bool GetCenter(_Out_ int& x, _Out_ int& y);
	virtual bool GetCenter(_Out_ int* x, _Out_ int* y);
	virtual bool GetCenter(_Out_ long long& x, _Out_ long long& y);
	virtual bool GetCenter(_Out_ long long* x, _Out_ long long* y);
	virtual bool GetCenter(_Out_ float& x, _Out_ float& y);
	virtual bool GetCenter(_Out_ float* x, _Out_ float* y);
	virtual bool GetCenter(_Out_ double& x, _Out_ double& y);
	virtual bool GetCenter(_Out_ double* x, _Out_ double* y);
	virtual bool GetCenter(_Out_ POINT& point);
	virtual bool GetCenter(_Out_ POINT* pPoint);
	virtual bool GetCenter(_Out_ SIZE& size);
	virtual bool GetCenter(_Out_ SIZE* pSize);
	virtual bool GetCenter(_Out_ CRavidPoint<int>& point);
	virtual bool GetCenter(_Out_ CRavidPoint<int>* pPoint);
	virtual bool GetCenter(_Out_ CRavidPoint<long long>& point);
	virtual bool GetCenter(_Out_ CRavidPoint<long long>* pPoint);
	virtual bool GetCenter(_Out_ CRavidPoint<float>& point);
	virtual bool GetCenter(_Out_ CRavidPoint<float>* pPoint);
	virtual bool GetCenter(_Out_ CRavidPoint<double>& point);
	virtual bool GetCenter(_Out_ CRavidPoint<double>* pPoint);

	virtual bool GetCenterOfGravity(_Out_ int& x, _Out_ int& y);
	virtual bool GetCenterOfGravity(_Out_ int* x, _Out_ int* y);
	virtual bool GetCenterOfGravity(_Out_ long long& x, _Out_ long long& y);
	virtual bool GetCenterOfGravity(_Out_ long long* x, _Out_ long long* y);
	virtual bool GetCenterOfGravity(_Out_ float& x, _Out_ float& y);
	virtual bool GetCenterOfGravity(_Out_ float* x, _Out_ float* y);
	virtual bool GetCenterOfGravity(_Out_ double& x, _Out_ double& y);
	virtual bool GetCenterOfGravity(_Out_ double* x, _Out_ double* y);
	virtual bool GetCenterOfGravity(_Out_ POINT& point);
	virtual bool GetCenterOfGravity(_Out_ POINT* pPoint);
	virtual bool GetCenterOfGravity(_Out_ SIZE& size);
	virtual bool GetCenterOfGravity(_Out_ SIZE* pSize);
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<int>& point);
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<int>* pPoint);
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<long long>& point);
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<long long>* pPoint);
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<float>& point);
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<float>* pPoint);
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<double>& point);
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<double>* pPoint);

	virtual bool GetRect(_Out_ int& left, _Out_ int& top, _Out_ int& right, _Out_ int& bottom);
	virtual bool GetRect(_Out_ int* pLeft, _Out_ int* pTop, _Out_ int* pRight, _Out_ int* pBottom);
	virtual bool GetRect(_Out_ long long& left, _Out_ long long& top, _Out_ long long& right, _Out_ long long& bottom);
	virtual bool GetRect(_Out_ long long* pLeft, _Out_ long long* pTop, _Out_ long long* pRight, _Out_ long long* pBottom);
	virtual bool GetRect(_Out_ float& left, _Out_ float& top, _Out_ float& right, _Out_ float& bottom);
	virtual bool GetRect(_Out_ float* pLeft, _Out_ float* pTop, _Out_ float* pRight, _Out_ float*pBottom);
	virtual bool GetRect(_Out_ double& left, _Out_ double& top, _Out_ double& right, _Out_ double& bottom);
	virtual bool GetRect(_Out_ double* pLeft, _Out_ double* pTop, _Out_ double* pRight, _Out_ double* pBottom);
	virtual bool GetRect(_Out_ RECT& rect);
	virtual bool GetRect(_Out_ RECT* pRect);
	virtual bool GetRect(_Out_ CRavidRect<int>& rect);
	virtual bool GetRect(_Out_ CRavidRect<int>* pRect);
	virtual bool GetRect(_Out_ CRavidRect<long long>& rect);
	virtual bool GetRect(_Out_ CRavidRect<long long>* pRect);
	virtual bool GetRect(_Out_ CRavidRect<float>& rect);
	virtual bool GetRect(_Out_ CRavidRect<float>* pRect);
	virtual bool GetRect(_Out_ CRavidRect<double>& rect);
	virtual bool GetRect(_Out_ CRavidRect<double>* pRect);

	virtual bool Offset(_In_ int x, _In_ int y);
	virtual bool Offset(_In_ long long x, _In_ long long y);
	virtual bool Offset(_In_ float x, _In_ float y);
	virtual bool Offset(_In_ double x, _In_ double y);
	virtual bool Offset(_In_ POINT& point);
	virtual bool Offset(_In_ POINT* pPoint);
	virtual bool Offset(_In_ SIZE& size);
	virtual bool Offset(_In_ SIZE* pSize);
	virtual bool Offset(_In_ CRavidPoint<int>& point);
	virtual bool Offset(_In_ CRavidPoint<int>* pPoint);
	virtual bool Offset(_In_ CRavidPoint<long long>& point);
	virtual bool Offset(_In_ CRavidPoint<long long>* pPoint);
	virtual bool Offset(_In_ CRavidPoint<float>& point);
	virtual bool Offset(_In_ CRavidPoint<float>* pPoint);
	virtual bool Offset(_In_ CRavidPoint<double>& point);
	virtual bool Offset(_In_ CRavidPoint<double>* pPoint);

	virtual bool PowOffset(_In_ double powX, _In_ double powY);

	virtual double GetArea();

	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidPoint<int>* pRpImageSize = nullptr);
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidPoint<int>* pRpImageSize = nullptr);
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidRect<int>* pRrImageSize);
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidRect<int>* pRrImageSize);

	virtual double GetAngle();

	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<int>& center);
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<int>* pCenter);
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<long long>& center);
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<long long>* pCenter);
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<float>& center);
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<float>* pCenter);
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<double>& center);
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<double>* pCenter);

	virtual bool GetIntersectionRegion(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);

	virtual bool GetUnionRegion(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);

	virtual bool GetSubtractionRegion(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);

	virtual bool GetExclusiveOrRegion(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);

	virtual bool DoesIntersect(_In_ CRavidGeometry* pRgShape);
	virtual bool GetIntersection(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);

	virtual bool DoesIgnoreInternalIntersection(_In_ CRavidGeometry* pRgShape);
	virtual bool GetIgnoreInternalIntersection(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);

protected:
	CRavidGeometryArray* m_pExclusiveRegion = nullptr;
};