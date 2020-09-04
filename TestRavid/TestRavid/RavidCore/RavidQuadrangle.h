#pragma once

#include "RavidGeometry.h"
#include "RavidPoint.h"

template <typename T>
class AFX_EXT_CLASS CRavidQuadrangle : public CRavidGeometry
{
public:
	RavidUseDynamicCreation(this);

	static_assert(CheckIntegerAndRealNumber<T>::value, "CRavidQuadrangle template class is able to use type within int, long long, float and double.");

	CRavidQuadrangle();
	virtual ~CRavidQuadrangle();

	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray* pExclusiveRegion);
	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray& refExclusiveRegion);

	virtual bool AddExclusiveRegion(_In_ CRavidGeometry* pGeometry);
	virtual bool AddExclusiveRegion(_In_ CRavidGeometry& refGeometry);

	virtual CRavidGeometryArray* GetExclusiveRegion() const;

	virtual void ClearExclusiveRegion();

	virtual bool IsThereExclusiveRegion() const;

	//////////////////////////////////////////////////////////////////////////
	// RavidQuadrangle constructor
	CRavidQuadrangle(_In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ T x1, _In_ T x2, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const SIZE& size, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ SIZE* pSize, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const POINT& point1, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ POINT* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const CRavidPoint<int>& point, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ CRavidPoint<int>* pPoint, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const CRavidPoint<long long>& po, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ CRavidPoint<long long>* pPoint, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const CRavidPoint<float>& point, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ CRavidPoint<float>* pPoint, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const CRavidPoint<double>& point, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ CRavidPoint<double>* pPoint, Ravid::Algorithms::CRavidImage& ri);


	//////////////////////////////////////////////////////////////////////////
	// Copy constructor
	CRavidQuadrangle(_In_ T x1, _In_ T y1, _In_ T x2, _In_ T y2, _In_ T x3, _In_ T y3, _In_ T x4, _In_ T y4);
	CRavidQuadrangle(_In_ const SIZE& size);
	CRavidQuadrangle(_In_ SIZE* pSize);
	CRavidQuadrangle(_In_ const POINT& point1, _In_ const POINT& point2, _In_ const POINT& point3, _In_ const POINT& point4);
	CRavidQuadrangle(_In_ POINT* pPoint1, _In_ POINT* pPoint2, _In_ POINT* pPoint3, _In_ POINT* pPoint4);
	CRavidQuadrangle(_In_ const CRavidPoint<int>& point1, _In_ const CRavidPoint<int>& point2, _In_ const CRavidPoint<int>& point3, _In_ const CRavidPoint<int>& point4);
	CRavidQuadrangle(_In_ CRavidPoint<int>* pPoint1, _In_ CRavidPoint<int>* pPoint2, _In_ CRavidPoint<int>* pPoint3, _In_ CRavidPoint<int>* pPoint4);
	CRavidQuadrangle(_In_ const CRavidPoint<long long>& point1, _In_ const CRavidPoint<long long>& point2, _In_ const CRavidPoint<long long>& point3, _In_ const CRavidPoint<long long>& point4);
	CRavidQuadrangle(_In_ CRavidPoint<long long>* pPoint1, _In_ CRavidPoint<long long>* pPoint2, _In_ CRavidPoint<long long>* pPoint3, _In_ CRavidPoint<long long>* pPoint4);
	CRavidQuadrangle(_In_ const CRavidPoint<float>& point1, _In_ const CRavidPoint<float>& point2, _In_ const CRavidPoint<float>& point3, _In_ const CRavidPoint<float>& point4);
	CRavidQuadrangle(_In_ CRavidPoint<float>* pPoint1, _In_ CRavidPoint<float>* pPoint2, _In_ CRavidPoint<float>* pPoint3, _In_ CRavidPoint<float>* pPoint4);
	CRavidQuadrangle(_In_ const CRavidPoint<double>& point1, _In_ const CRavidPoint<double>& point2, _In_ const CRavidPoint<double>& point3, _In_ const CRavidPoint<double>& point4);
	CRavidQuadrangle(_In_ CRavidPoint<double>* pPoint1, _In_ CRavidPoint<double>* pPoint2, _In_ CRavidPoint<double>* pPoint3, _In_ CRavidPoint<double>* pPoint4);
	CRavidQuadrangle(_In_ const RECT& rect);
	CRavidQuadrangle(_In_ RECT* pRect);
	CRavidQuadrangle(_In_ const CRavidRect<int>& rect);
	CRavidQuadrangle(_In_ CRavidRect<int>* pRect);
	CRavidQuadrangle(_In_ const CRavidRect<long long>& rect);
	CRavidQuadrangle(_In_ CRavidRect<long long>* pRect);
	CRavidQuadrangle(_In_ const CRavidRect<float>& rect);
	CRavidQuadrangle(_In_ CRavidRect<float>* pRect);
	CRavidQuadrangle(_In_ const CRavidRect<double>& rect);
	CRavidQuadrangle(_In_ CRavidRect<double>* pRect);
	CRavidQuadrangle(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle(_In_ CRavidQuadrangle<int>* pQuad);
	CRavidQuadrangle(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle(_In_ CRavidQuadrangle<long long>* pQuad);
	CRavidQuadrangle(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle(_In_ CRavidQuadrangle<float>* pQuad);
	CRavidQuadrangle(_In_ const CRavidQuadrangle<double>& quad);
	CRavidQuadrangle(_In_ CRavidQuadrangle<double>* pQuad);
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Assignment operator
	void operator=(_In_ const RECT& rect);
	void operator=(_In_ RECT* pRect);
	void operator=(_In_ const CRavidRect<int>& rect);
	void operator=(_In_ CRavidRect<int>* pRect);
	void operator=(_In_ const CRavidRect<long long>& rect);
	void operator=(_In_ CRavidRect<long long>* pRect);
	void operator=(_In_ const CRavidRect<float>& rect);
	void operator=(_In_ CRavidRect<float>* pRect);
	void operator=(_In_ const CRavidRect<double>& rect);
	void operator=(_In_ CRavidRect<double>* pRect);
	void operator=(_In_ const CRavidQuadrangle<int>& quad);
	void operator=(_In_ CRavidQuadrangle<int>* pQuad);
	void operator=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator=(_In_ CRavidQuadrangle<long long>* pQuad);
	void operator=(_In_ const CRavidQuadrangle<float>& quad);
	void operator=(_In_ CRavidQuadrangle<float>* pQuad);
	void operator=(_In_ const CRavidQuadrangle<double>& quad);
	void operator=(_In_ CRavidQuadrangle<double>* pQuad);
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Comparison operator
	bool operator==(_In_ const CRavidQuadrangle<int>& quad);
	bool operator==(_In_ const CRavidQuadrangle<long long>& quad);
	bool operator==(_In_ const CRavidQuadrangle<float>& quad);
	bool operator==(_In_ const CRavidQuadrangle<double>& quad);

	bool operator!=(_In_ const CRavidQuadrangle<int>& quad);
	bool operator!=(_In_ const CRavidQuadrangle<long long>& quad);
	bool operator!=(_In_ const CRavidQuadrangle<float>& quad);
	bool operator!=(_In_ const CRavidQuadrangle<double>& quad);
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
	void operator+=(_In_ const CRavidLine<int>& line);
	void operator+=(_In_ const CRavidLine<long long>& line);
	void operator+=(_In_ const CRavidLine<float>& line);
	void operator+=(_In_ const CRavidLine<double>& line);
	void operator+=(_In_ const CRavidQuadrangle<int>& quad);
	void operator+=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator+=(_In_ const CRavidQuadrangle<float>& quad);
	void operator+=(_In_ const CRavidQuadrangle<double>& quad);

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
	void operator-=(_In_ const CRavidLine<int>& line);
	void operator-=(_In_ const CRavidLine<long long>& line);
	void operator-=(_In_ const CRavidLine<float>& line);
	void operator-=(_In_ const CRavidLine<double>& line);
	void operator-=(_In_ const CRavidQuadrangle<int>& quad);
	void operator-=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator-=(_In_ const CRavidQuadrangle<float>& quad);
	void operator-=(_In_ const CRavidQuadrangle<double>& quad);

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
	void operator*=(_In_ const CRavidLine<int>& line);
	void operator*=(_In_ const CRavidLine<long long>& line);
	void operator*=(_In_ const CRavidLine<float>& line);
	void operator*=(_In_ const CRavidLine<double>& line);
	void operator*=(_In_ const CRavidQuadrangle<int>& quad);
	void operator*=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator*=(_In_ const CRavidQuadrangle<float>& quad);
	void operator*=(_In_ const CRavidQuadrangle<double>& quad);

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
	void operator/=(_In_ const CRavidLine<int>& line);
	void operator/=(_In_ const CRavidLine<long long>& line);
	void operator/=(_In_ const CRavidLine<float>& line);
	void operator/=(_In_ const CRavidLine<double>& line);
	void operator/=(_In_ const CRavidQuadrangle<int>& quad);
	void operator/=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator/=(_In_ const CRavidQuadrangle<float>& quad);
	void operator/=(_In_ const CRavidQuadrangle<double>& quad);
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Arithmetic operator
	CRavidQuadrangle<double> operator+(_In_ const int& value);
	CRavidQuadrangle<double> operator+(_In_ const long long& value);
	CRavidQuadrangle<double> operator+(_In_ const float& value);
	CRavidQuadrangle<double> operator+(_In_ const double& value);
	CRavidQuadrangle<double> operator+(_In_ const POINT& point);
	CRavidQuadrangle<double> operator+(_In_ const SIZE& size);
	CRavidQuadrangle<double> operator+(_In_ const CRavidPoint<int>& point);
	CRavidQuadrangle<double> operator+(_In_ const CRavidPoint<long long>& point);
	CRavidQuadrangle<double> operator+(_In_ const CRavidPoint<float>& point);
	CRavidQuadrangle<double> operator+(_In_ const CRavidPoint<double>& point);
	CRavidQuadrangle<double> operator+(_In_ const CRavidLine<int>& line);
	CRavidQuadrangle<double> operator+(_In_ const CRavidLine<long long>& line);
	CRavidQuadrangle<double> operator+(_In_ const CRavidLine<float>& line);
	CRavidQuadrangle<double> operator+(_In_ const CRavidLine<double>& line);
	CRavidQuadrangle<double> operator+(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle<double> operator+(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle<double> operator+(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle<double> operator+(_In_ const CRavidQuadrangle<double>& quad);

	CRavidQuadrangle<double> operator-(_In_ const int& value);
	CRavidQuadrangle<double> operator-(_In_ const long long& value);
	CRavidQuadrangle<double> operator-(_In_ const float& value);
	CRavidQuadrangle<double> operator-(_In_ const double& value);
	CRavidQuadrangle<double> operator-(_In_ const POINT& point);
	CRavidQuadrangle<double> operator-(_In_ const SIZE& size);
	CRavidQuadrangle<double> operator-(_In_ const CRavidPoint<int>& point);
	CRavidQuadrangle<double> operator-(_In_ const CRavidPoint<long long>& point);
	CRavidQuadrangle<double> operator-(_In_ const CRavidPoint<float>& point);
	CRavidQuadrangle<double> operator-(_In_ const CRavidPoint<double>& point);
	CRavidQuadrangle<double> operator-(_In_ const CRavidLine<int>& line);
	CRavidQuadrangle<double> operator-(_In_ const CRavidLine<long long>& line);
	CRavidQuadrangle<double> operator-(_In_ const CRavidLine<float>& line);
	CRavidQuadrangle<double> operator-(_In_ const CRavidLine<double>& line);
	CRavidQuadrangle<double> operator-(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle<double> operator-(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle<double> operator-(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle<double> operator-(_In_ const CRavidQuadrangle<double>& quad);

	CRavidQuadrangle<double> operator*(_In_ const int& value);
	CRavidQuadrangle<double> operator*(_In_ const long long& value);
	CRavidQuadrangle<double> operator*(_In_ const float& value);
	CRavidQuadrangle<double> operator*(_In_ const double& value);
	CRavidQuadrangle<double> operator*(_In_ const POINT& point);
	CRavidQuadrangle<double> operator*(_In_ const SIZE& size);
	CRavidQuadrangle<double> operator*(_In_ const CRavidPoint<int>& point);
	CRavidQuadrangle<double> operator*(_In_ const CRavidPoint<long long>& point);
	CRavidQuadrangle<double> operator*(_In_ const CRavidPoint<float>& point);
	CRavidQuadrangle<double> operator*(_In_ const CRavidPoint<double>& point);
	CRavidQuadrangle<double> operator*(_In_ const CRavidLine<int>& line);
	CRavidQuadrangle<double> operator*(_In_ const CRavidLine<long long>& line);
	CRavidQuadrangle<double> operator*(_In_ const CRavidLine<float>& line);
	CRavidQuadrangle<double> operator*(_In_ const CRavidLine<double>& line);
	CRavidQuadrangle<double> operator*(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle<double> operator*(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle<double> operator*(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle<double> operator*(_In_ const CRavidQuadrangle<double>& quad);

	CRavidQuadrangle<double> operator/(_In_ const int& value);
	CRavidQuadrangle<double> operator/(_In_ const long long& value);
	CRavidQuadrangle<double> operator/(_In_ const float& value);
	CRavidQuadrangle<double> operator/(_In_ const double& value);
	CRavidQuadrangle<double> operator/(_In_ const POINT& point);
	CRavidQuadrangle<double> operator/(_In_ const SIZE& size);
	CRavidQuadrangle<double> operator/(_In_ const CRavidPoint<int>& point);
	CRavidQuadrangle<double> operator/(_In_ const CRavidPoint<long long>& point);
	CRavidQuadrangle<double> operator/(_In_ const CRavidPoint<float>& point);
	CRavidQuadrangle<double> operator/(_In_ const CRavidPoint<double>& point);
	CRavidQuadrangle<double> operator/(_In_ const CRavidLine<int>& line);
	CRavidQuadrangle<double> operator/(_In_ const CRavidLine<long long>& line);
	CRavidQuadrangle<double> operator/(_In_ const CRavidLine<float>& line);
	CRavidQuadrangle<double> operator/(_In_ const CRavidLine<double>& line);
	CRavidQuadrangle<double> operator/(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle<double> operator/(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle<double> operator/(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle<double> operator/(_In_ const CRavidQuadrangle<double>& quad);
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Casting operator
	virtual operator POINT();
	virtual operator CPoint();
	virtual operator RECT();
	virtual operator CRect();
	//////////////////////////////////////////////////////////////////////////

	virtual CRavidRect<T> GetRect();

	virtual POINT GetPointStruct() override;
	virtual RECT GetRectStruct() override;

	virtual ERavidGeometryShapeType GetShapeType();
	virtual ERavidGeometryTemplateType GetTemplateType();

	virtual CRavidGeometry* MakeDifferentTemplateType(ERavidGeometryTemplateType eType);

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

	CRavidPoint<double> GetCenterOfGravity();
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

	bool SetQuadrangle(_In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2, _In_ int x3, _In_ int y3, _In_ int x4, _In_ int y4);
	bool SetQuadrangle(_In_ long long x1, _In_ long long y1, _In_ long long x2, _In_ long long y2, _In_ long long x3, _In_ long long y3, _In_ long long x4, _In_ long long y4);
	bool SetQuadrangle(_In_ float x1, _In_ float y1, _In_ float x2, _In_ float y2, _In_ float x3, _In_ float y3, _In_ float x4, _In_ float y4);
	bool SetQuadrangle(_In_ double x1, _In_ double y1, _In_ double x2, _In_ double y2, _In_ double x3, _In_ double y3, _In_ double x4, _In_ double y4);
	bool SetQuadrangle(_In_ POINT& point1, _In_ POINT& point2, _In_ POINT& point3, _In_ POINT& point4);
	bool SetQuadrangle(_In_ POINT* pPoint1, _In_ POINT* pPoint2, _In_ POINT* pPoint3, _In_ POINT* pPoint4);
	bool SetQuadrangle(_In_ CRavidPoint<int>& point1, _In_ CRavidPoint<int>& point2, _In_ CRavidPoint<int>& point3, _In_ CRavidPoint<int>& point4);
	bool SetQuadrangle(_In_ CRavidPoint<int>* pPoint1, _In_ CRavidPoint<int>* pPoint2, _In_ CRavidPoint<int>* pPoint3, _In_ CRavidPoint<int>* pPoint4);
	bool SetQuadrangle(_In_ CRavidPoint<long long>& point1, _In_ CRavidPoint<long long>& point2, _In_ CRavidPoint<long long>& point3, _In_ CRavidPoint<long long>& point4);
	bool SetQuadrangle(_In_ CRavidPoint<long long>* pPoint1, _In_ CRavidPoint<long long>* pPoint2, _In_ CRavidPoint<long long>* pPoint3, _In_ CRavidPoint<long long>* pPoint4);
	bool SetQuadrangle(_In_ CRavidPoint<float>& point1, _In_ CRavidPoint<float>& point2, _In_ CRavidPoint<float>& point3, _In_ CRavidPoint<float>& point4);
	bool SetQuadrangle(_In_ CRavidPoint<float>* pPoint1, _In_ CRavidPoint<float>* pPoint2, _In_ CRavidPoint<float>* pPoint3, _In_ CRavidPoint<float>* pPoint4);
	bool SetQuadrangle(_In_ CRavidPoint<double>& point1, _In_ CRavidPoint<double>& point2, _In_ CRavidPoint<double>& point3, _In_ CRavidPoint<double>& point4);
	bool SetQuadrangle(_In_ CRavidPoint<double>* pPoint1, _In_ CRavidPoint<double>* pPoint2, _In_ CRavidPoint<double>* pPoint3, _In_ CRavidPoint<double>* pPoint4);
	bool SetQuadrangle(_In_ RECT& rect);
	bool SetQuadrangle(_In_ RECT* pRect);
	bool SetQuadrangle(_In_ CRavidRect<int>& rect);
	bool SetQuadrangle(_In_ CRavidRect<int>* pRect);
	bool SetQuadrangle(_In_ CRavidRect<long long>& rect);
	bool SetQuadrangle(_In_ CRavidRect<long long>* pRect);
	bool SetQuadrangle(_In_ CRavidRect<float>& rect);
	bool SetQuadrangle(_In_ CRavidRect<float>* pRect);
	bool SetQuadrangle(_In_ CRavidRect<double>& rect);
	bool SetQuadrangle(_In_ CRavidRect<double>* pRect);
	bool SetQuadrangle(_In_ CRavidQuadrangle<int>& quad);
	bool SetQuadrangle(_In_ CRavidQuadrangle<int>* pQuad);
	bool SetQuadrangle(_In_ CRavidQuadrangle<long long>& quad);
	bool SetQuadrangle(_In_ CRavidQuadrangle<long long>* pQuad);
	bool SetQuadrangle(_In_ CRavidQuadrangle<float>& quad);
	bool SetQuadrangle(_In_ CRavidQuadrangle<float>* pQuad);
	bool SetQuadrangle(_In_ CRavidQuadrangle<double>& quad);
	bool SetQuadrangle(_In_ CRavidQuadrangle<double>* pQuad);

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

	CRavidPoint<T> rpPoints[4];

protected:
	CRavidGeometryArray * m_pExclusiveRegion = nullptr;
};

