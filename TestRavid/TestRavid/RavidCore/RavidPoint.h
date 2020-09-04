#pragma once

#include "RavidGeometry.h"

template <typename T>
class AFX_EXT_CLASS CRavidPoint : public CRavidGeometry
{
public:
	RavidUseDynamicCreation(this);

	static_assert(CheckIntegerAndRealNumber<T>::value, "CRavidPoint template class is able to use type within int, long long, float and double.");

	CRavidPoint();
	virtual ~CRavidPoint();

	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray* pExclusiveRegion);
	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray& refExclusiveRegion);

	virtual bool AddExclusiveRegion(_In_ CRavidGeometry* pGeometry);
	virtual bool AddExclusiveRegion(_In_ CRavidGeometry& refGeometry);

	virtual CRavidGeometryArray* GetExclusiveRegion() const;

	virtual void ClearExclusiveRegion();

	virtual bool IsThereExclusiveRegion() const;

	//////////////////////////////////////////////////////////////////////////
	// Copy constructor
	CRavidPoint(_In_ int x, _In_ int y);
	CRavidPoint(_In_ int x, _In_ long long y);
	CRavidPoint(_In_ int x, _In_ float y);
	CRavidPoint(_In_ int x, _In_ double y);
	CRavidPoint(_In_ long long x, _In_ int y);
	CRavidPoint(_In_ long long x, _In_ long long y);
	CRavidPoint(_In_ long long x, _In_ float y);
	CRavidPoint(_In_ long long x, _In_ double y);
	CRavidPoint(_In_ float x, _In_ int y);
	CRavidPoint(_In_ float x, _In_ long long y);
	CRavidPoint(_In_ float x, _In_ float y);
	CRavidPoint(_In_ float x, _In_ double y);
	CRavidPoint(_In_ double x, _In_ int y);
	CRavidPoint(_In_ double x, _In_ long long y);
	CRavidPoint(_In_ double x, _In_ float y);
	CRavidPoint(_In_ double x, _In_ double y);
	CRavidPoint(_In_ const POINT& point);
	CRavidPoint(_In_ POINT* pPoint);
	CRavidPoint(_In_ const SIZE& size);
	CRavidPoint(_In_ SIZE* pSize);
	CRavidPoint(_In_ const CRavidPoint<int>& point);
	CRavidPoint(_In_ CRavidPoint<int>* pPoint);
	CRavidPoint(_In_ const CRavidPoint<long long>& point);
	CRavidPoint(_In_ CRavidPoint<long long>* pPoint);
	CRavidPoint(_In_ const CRavidPoint<float>& point);
	CRavidPoint(_In_ CRavidPoint<float>* pPoint);
	CRavidPoint(_In_ const CRavidPoint<double>& point);
	CRavidPoint(_In_ CRavidPoint<double>* pPoint);
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Assignment operator
	void operator=(_In_ const POINT& point);
	void operator=(_In_ POINT* pPoint);
	void operator=(_In_ const SIZE& size);
	void operator=(_In_ SIZE* pSize);
	void operator=(_In_ const CRavidPoint<int>& point);
	void operator=(_In_ CRavidPoint<int>* pPoint);
	void operator=(_In_ const CRavidPoint<long long>& point);
	void operator=(_In_ CRavidPoint<long long>* pPoint);
	void operator=(_In_ const CRavidPoint<float>& point);
	void operator=(_In_ CRavidPoint<float>* pPoint);
	void operator=(_In_ const CRavidPoint<double>& point);
	void operator=(_In_ CRavidPoint<double>* pPoint);
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Comparison operator
	bool operator==(_In_ const POINT& point);
	bool operator==(_In_ const SIZE& size);
	bool operator==(_In_ const CRavidPoint<int>& point);
	bool operator==(_In_ const CRavidPoint<long long>& point);
	bool operator==(_In_ const CRavidPoint<float>& point);
	bool operator==(_In_ const CRavidPoint<double>& point);

	bool operator!=(_In_ const POINT& point);
	bool operator!=(_In_ const SIZE& size);
	bool operator!=(_In_ const CRavidPoint<int>& point);
	bool operator!=(_In_ const CRavidPoint<long long>& point);
	bool operator!=(_In_ const CRavidPoint<float>& point);
	bool operator!=(_In_ const CRavidPoint<double>& point);
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
	CRavidPoint<double> operator+(_In_ const int& value);
	CRavidPoint<double> operator+(_In_ const long long& value);
	CRavidPoint<double> operator+(_In_ const float& value);
	CRavidPoint<double> operator+(_In_ const double& value);
	CRavidPoint<double> operator+(_In_ const POINT& point);
	CRavidPoint<double> operator+(_In_ const SIZE& size);
	CRavidPoint<double> operator+(_In_ const CRavidPoint<int>& point);
	CRavidPoint<double> operator+(_In_ const CRavidPoint<long long>& point);
	CRavidPoint<double> operator+(_In_ const CRavidPoint<float>& point);
	CRavidPoint<double> operator+(_In_ const CRavidPoint<double>& point);

	CRavidPoint<double> operator-(_In_ const int& value);
	CRavidPoint<double> operator-(_In_ const long long& value);
	CRavidPoint<double> operator-(_In_ const float& value);
	CRavidPoint<double> operator-(_In_ const double& value);
	CRavidPoint<double> operator-(_In_ const POINT& point);
	CRavidPoint<double> operator-(_In_ const SIZE& size);
	CRavidPoint<double> operator-(_In_ const CRavidPoint<int>& point);
	CRavidPoint<double> operator-(_In_ const CRavidPoint<long long>& point);
	CRavidPoint<double> operator-(_In_ const CRavidPoint<float>& point);
	CRavidPoint<double> operator-(_In_ const CRavidPoint<double>& point);

	CRavidPoint<double> operator*(_In_ const int& value);
	CRavidPoint<double> operator*(_In_ const long long& value);
	CRavidPoint<double> operator*(_In_ const float& value);
	CRavidPoint<double> operator*(_In_ const double& value);
	CRavidPoint<double> operator*(_In_ const POINT& point);
	CRavidPoint<double> operator*(_In_ const SIZE& size);
	CRavidPoint<double> operator*(_In_ const CRavidPoint<int>& point);
	CRavidPoint<double> operator*(_In_ const CRavidPoint<long long>& point);
	CRavidPoint<double> operator*(_In_ const CRavidPoint<float>& point);
	CRavidPoint<double> operator*(_In_ const CRavidPoint<double>& point);

	CRavidPoint<double> operator/(_In_ const int& value);
	CRavidPoint<double> operator/(_In_ const long long& value);
	CRavidPoint<double> operator/(_In_ const float& value);
	CRavidPoint<double> operator/(_In_ const double& value);
	CRavidPoint<double> operator/(_In_ const POINT& point);
	CRavidPoint<double> operator/(_In_ const SIZE& size);
	CRavidPoint<double> operator/(_In_ const CRavidPoint<int>& point);
	CRavidPoint<double> operator/(_In_ const CRavidPoint<long long>& point);
	CRavidPoint<double> operator/(_In_ const CRavidPoint<float>& point);
	CRavidPoint<double> operator/(_In_ const CRavidPoint<double>& point);
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

	virtual double GetAngle() override;

	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidPoint<int>* pRpImageSize = nullptr) override;
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidPoint<int>* pRpImageSize = nullptr) override;
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidRect<int>* pRrImageSize) override;
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidRect<int>* pRrImageSize) override;

	ERavidPointsDirection GetPointsDirection(_In_ double dblBeginPtX, _In_ double dblBeginPtY, _In_ double dblMidPtX, _In_ double dblMidPtY);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<int>& rpBegin, _In_ CRavidPoint<int>& rpMid);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<int>* pRpBegin, _In_ CRavidPoint<int>* pRpMid);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<long long>& rpBegin, _In_ CRavidPoint<long long>& rpMid);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<long long>* pRpBegin, _In_ CRavidPoint<long long>* pRpMid);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<float>& rpBegin, _In_ CRavidPoint<float>& rpMid);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<float>* pRpBegin, _In_ CRavidPoint<float>* pRpMid);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<double>& rpBegin, _In_ CRavidPoint<double>& rpMid);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<double>* pRpBegin, _In_ CRavidPoint<double>* pRpMid);

	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<int>& rlBegin);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<int>* pRlBegin);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<long long>& rlBegin);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<long long>* pRlBegin);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<float>& rlBegin);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<float>* pRlBegin);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<double>& rlBegin);
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<double>* pRlBegin);

	bool SetPoint(_In_ int x, _In_ int y);
	bool SetPoint(_In_ int x, _In_ long long y);
	bool SetPoint(_In_ int x, _In_ float y);
	bool SetPoint(_In_ int x, _In_ double y);
	bool SetPoint(_In_ long long x, _In_ int y);
	bool SetPoint(_In_ long long x, _In_ long long y);
	bool SetPoint(_In_ long long x, _In_ float y);
	bool SetPoint(_In_ long long x, _In_ double y);
	bool SetPoint(_In_ float x, _In_ int y);
	bool SetPoint(_In_ float x, _In_ long long y);
	bool SetPoint(_In_ float x, _In_ float y);
	bool SetPoint(_In_ float x, _In_ double y);
	bool SetPoint(_In_ double x, _In_ int y);
	bool SetPoint(_In_ double x, _In_ long long y);
	bool SetPoint(_In_ double x, _In_ float y);
	bool SetPoint(_In_ double x, _In_ double y);
	bool SetPoint(_In_ POINT& point);
	bool SetPoint(_In_ POINT* pPoint);
	bool SetPoint(_In_ SIZE& size);
	bool SetPoint(_In_ SIZE* pSize);
	bool SetPoint(_In_ CRavidPoint<int>& point);
	bool SetPoint(_In_ CRavidPoint<int>* pPoint);
	bool SetPoint(_In_ CRavidPoint<long long>& point);
	bool SetPoint(_In_ CRavidPoint<long long>* pPoint);
	bool SetPoint(_In_ CRavidPoint<float>& point);
	bool SetPoint(_In_ CRavidPoint<float>* pPoint);
	bool SetPoint(_In_ CRavidPoint<double>& point);
	bool SetPoint(_In_ CRavidPoint<double>* pPoint);

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

	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<int>& center) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<int>* pCenter) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<long long>& center) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<long long>* pCenter) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<float>& center) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<float>* pCenter) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<double>& center) override;
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<double>* pCenter) override;

	double GetDistance(_In_ CRavidPoint<int>& point);
	double GetDistance(_In_ CRavidPoint<int>* pPoint);
	double GetDistance(_In_ CRavidPoint<long long>& point);
	double GetDistance(_In_ CRavidPoint<long long>* pPoint);
	double GetDistance(_In_ CRavidPoint<float>& point);
	double GetDistance(_In_ CRavidPoint<float>* pPoint);
	double GetDistance(_In_ CRavidPoint<double>& point);
	double GetDistance(_In_ CRavidPoint<double>* pPoint);
	double GetOrthogonalDistance(_In_ CRavidLine<int>& line);
	double GetOrthogonalDistance(_In_ CRavidLine<int>* pLine);
	double GetOrthogonalDistance(_In_ CRavidLine<long long>& line);
	double GetOrthogonalDistance(_In_ CRavidLine<long long>* pLine);
	double GetOrthogonalDistance(_In_ CRavidLine<float>& line);
	double GetOrthogonalDistance(_In_ CRavidLine<float>* pLine);
	double GetOrthogonalDistance(_In_ CRavidLine<double>& line);
	double GetOrthogonalDistance(_In_ CRavidLine<double>* pLine);

	double GetAngle(_In_ CRavidPoint<int>& point);
	double GetAngle(_In_ CRavidPoint<int>* pPoint);
	double GetAngle(_In_ CRavidPoint<long long>& point);
	double GetAngle(_In_ CRavidPoint<long long>* pPoint);
	double GetAngle(_In_ CRavidPoint<float>& point);
	double GetAngle(_In_ CRavidPoint<float>* pPoint);
	double GetAngle(_In_ CRavidPoint<double>& point);
	double GetAngle(_In_ CRavidPoint<double>* pPoint);

	double GetInteriorAngle(_In_ CRavidPoint<int>& firstPoint, _In_ CRavidPoint<int>& thirdPoint);
	double GetInteriorAngle(_In_ CRavidPoint<int>* pFirstPoint, _In_ CRavidPoint<int>* pThirdPoint);
	double GetInteriorAngle(_In_ CRavidPoint<long long>& firstPoint, _In_ CRavidPoint<long long>& thirdPoint);
	double GetInteriorAngle(_In_ CRavidPoint<long long>* pFirstPoint, _In_ CRavidPoint<long long>* pThirdPoint);
	double GetInteriorAngle(_In_ CRavidPoint<float>& firstPoint, _In_ CRavidPoint<float>& thirdPoint);
	double GetInteriorAngle(_In_ CRavidPoint<float>* pFirstPoint, _In_ CRavidPoint<float>* pThirdPoint);
	double GetInteriorAngle(_In_ CRavidPoint<double>& firstPoint, _In_ CRavidPoint<double>& thirdPoint);
	double GetInteriorAngle(_In_ CRavidPoint<double>* pFirstPoint, _In_ CRavidPoint<double>* pThirdPoint);

	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<int>& point1, _In_ CRavidPoint<int>& point2);
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<int>* pPoint1, _In_ CRavidPoint<int>* pPoint2);
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<long long>& point1, _In_ CRavidPoint<long long>& point2);
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<long long>* pPoint1, _In_ CRavidPoint<long long>* pPoint2);
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<float>& point1, _In_ CRavidPoint<float>& point2);
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<float>* pPoint1, _In_ CRavidPoint<float>* pPoint2);
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<double>& point1, _In_ CRavidPoint<double>& point2);
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<double>* pPoint1, _In_ CRavidPoint<double>* pPoint2);

	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<int>& rpTarget);
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<int>* pRpTarget);
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<long long>& rpTarget);
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<long long>* pRpTarget);
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<float>& rpTarget);
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<float>* pRpTarget);
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<double>& rpTarget);
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<double>* pRpTarget);

	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<int>& rpTarget);
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<int>* pRpTarget);
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<long long>& rpTarget);
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<long long>* pRpTarget);
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<float>& rpTarget);
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<float>* pRpTarget);
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<double>& rpTarget);
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<double>* pRpTarget);

	CRavidGeometryArray MakeCrossHair(_In_opt_ double dblLineLength = 1., _In_opt_ bool bDiagonal = false);
	bool MakeCrossHair(_Out_ CRavidGeometryArray& rga, _In_opt_ double dblLineLength = 1., _In_opt_ bool bDiagonal = false);
	bool MakeCrossHair(_Out_ CRavidGeometryArray* pRga, _In_opt_ double dblLineLength = 1., _In_opt_ bool bDiagonal = false);

	T x = 0;
	T y = 0;

protected:
	CRavidGeometryArray* m_pExclusiveRegion = nullptr;
};