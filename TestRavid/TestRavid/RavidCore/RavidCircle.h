#pragma once

#include "RavidGeometry.h"

template <typename T>
class AFX_EXT_CLASS CRavidCircle : public CRavidGeometry
{
public:
	RavidUseDynamicCreation(this);

	static_assert(CheckIntegerAndRealNumber<T>::value, "CRavidCircle template class is able to use type within int, long long, float and double.");

	CRavidCircle();
	virtual ~CRavidCircle();

	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray* pExclusiveRegion);
	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray& refExclusiveRegion);

	virtual bool AddExclusiveRegion(_In_ CRavidGeometry* pGeometry);
	virtual bool AddExclusiveRegion(_In_ CRavidGeometry& refGeometry);

	virtual CRavidGeometryArray* GetExclusiveRegion() const;

	virtual void ClearExclusiveRegion();

	virtual bool IsThereExclusiveRegion() const;

	//////////////////////////////////////////////////////////////////////////
	// RavidImage constructor
	CRavidCircle(_In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ T x, _In_ T y, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const POINT& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ POINT* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const SIZE& size, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ SIZE* pSize, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<int>& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<int>* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<long long>& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<long long>* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<float>& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<float>* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<double>& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<double>* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_ double angle = 0.0, _In_ double startDeg = 0.0, _In_ double deltaDeg = 360.0, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);

	//////////////////////////////////////////////////////////////////////////
	// Copy constructor

	CRavidCircle(_In_ T x, _In_ T y, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const POINT& point, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ POINT* pPoint, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const SIZE& size, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ SIZE* pSize, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<int>& point, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<int>* pPoint, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<long long>& point, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<long long>* pPoint, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<float>& point, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<float>* pPoint, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<double>& point, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<double>* pPoint, _In_ T radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const RECT& rect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ RECT* pRect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidRect<int>& rect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidRect<int>* pRect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidRect<long long>& rect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidRect<long long>* pRect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidRect<float>& rect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidRect<float>* pRect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidRect<double>& rect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidRect<double>* pRect, _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidCircle<int>& cir);
	CRavidCircle(_In_ CRavidCircle<int>* pCir);
	CRavidCircle(_In_ const CRavidCircle<long long>& cir);
	CRavidCircle(_In_ CRavidCircle<long long>* pCir);
	CRavidCircle(_In_ const CRavidCircle<float>& cir);
	CRavidCircle(_In_ CRavidCircle<float>* pCir);
	CRavidCircle(_In_ const CRavidCircle<double>& cir);
	CRavidCircle(_In_ CRavidCircle<double>* pCir);

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
	void operator=(_In_ const CRavidCircle<int>& cir);
	void operator=(_In_ CRavidCircle<int>* pCir);
	void operator=(_In_ const CRavidCircle<long long>& cir);
	void operator=(_In_ CRavidCircle<long long>* pCir);
	void operator=(_In_ const CRavidCircle<float>& cir);
	void operator=(_In_ CRavidCircle<float>* pCir);
	void operator=(_In_ const CRavidCircle<double>& cir);
	void operator=(_In_ CRavidCircle<double>* pCir);
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Comparison operator
	bool operator==(_In_ const CRavidCircle<int>& cir);
	bool operator==(_In_ const CRavidCircle<long long>& cir);
	bool operator==(_In_ const CRavidCircle<float>& cir);
	bool operator==(_In_ const CRavidCircle<double>& cir);

	bool operator!=(_In_ const CRavidCircle<int>& cir);
	bool operator!=(_In_ const CRavidCircle<long long>& cir);
	bool operator!=(_In_ const CRavidCircle<float>& cir);
	bool operator!=(_In_ const CRavidCircle<double>& cir);
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
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Arithmetic operator
	CRavidCircle<double> operator+(_In_ const int& value);
	CRavidCircle<double> operator+(_In_ const long long& value);
	CRavidCircle<double> operator+(_In_ const float& value);
	CRavidCircle<double> operator+(_In_ const double& value);
	CRavidCircle<double> operator+(_In_ const POINT& point);
	CRavidCircle<double> operator+(_In_ const SIZE& size);
	CRavidCircle<double> operator+(_In_ const CRavidPoint<int>& point);
	CRavidCircle<double> operator+(_In_ const CRavidPoint<long long>& point);
	CRavidCircle<double> operator+(_In_ const CRavidPoint<float>& point);
	CRavidCircle<double> operator+(_In_ const CRavidPoint<double>& point);
	CRavidCircle<double> operator+(_In_ const CRavidLine<int>& line);
	CRavidCircle<double> operator+(_In_ const CRavidLine<long long>& line);
	CRavidCircle<double> operator+(_In_ const CRavidLine<float>& line);
	CRavidCircle<double> operator+(_In_ const CRavidLine<double>& line);

	CRavidCircle<double> operator-(_In_ const int& value);
	CRavidCircle<double> operator-(_In_ const long long& value);
	CRavidCircle<double> operator-(_In_ const float& value);
	CRavidCircle<double> operator-(_In_ const double& value);
	CRavidCircle<double> operator-(_In_ const POINT& point);
	CRavidCircle<double> operator-(_In_ const SIZE& size);
	CRavidCircle<double> operator-(_In_ const CRavidPoint<int>& point);
	CRavidCircle<double> operator-(_In_ const CRavidPoint<long long>& point);
	CRavidCircle<double> operator-(_In_ const CRavidPoint<float>& point);
	CRavidCircle<double> operator-(_In_ const CRavidPoint<double>& point);
	CRavidCircle<double> operator-(_In_ const CRavidLine<int>& line);
	CRavidCircle<double> operator-(_In_ const CRavidLine<long long>& line);
	CRavidCircle<double> operator-(_In_ const CRavidLine<float>& line);
	CRavidCircle<double> operator-(_In_ const CRavidLine<double>& line);

	CRavidCircle<double> operator*(_In_ const int& value);
	CRavidCircle<double> operator*(_In_ const long long& value);
	CRavidCircle<double> operator*(_In_ const float& value);
	CRavidCircle<double> operator*(_In_ const double& value);
	CRavidCircle<double> operator*(_In_ const POINT& point);
	CRavidCircle<double> operator*(_In_ const SIZE& size);
	CRavidCircle<double> operator*(_In_ const CRavidPoint<int>& point);
	CRavidCircle<double> operator*(_In_ const CRavidPoint<long long>& point);
	CRavidCircle<double> operator*(_In_ const CRavidPoint<float>& point);
	CRavidCircle<double> operator*(_In_ const CRavidPoint<double>& point);
	CRavidCircle<double> operator*(_In_ const CRavidLine<int>& line);
	CRavidCircle<double> operator*(_In_ const CRavidLine<long long>& line);
	CRavidCircle<double> operator*(_In_ const CRavidLine<float>& line);
	CRavidCircle<double> operator*(_In_ const CRavidLine<double>& line);

	CRavidCircle<double> operator/(_In_ const int& value);
	CRavidCircle<double> operator/(_In_ const long long& value);
	CRavidCircle<double> operator/(_In_ const float& value);
	CRavidCircle<double> operator/(_In_ const double& value);
	CRavidCircle<double> operator/(_In_ const POINT& point);
	CRavidCircle<double> operator/(_In_ const SIZE& size);
	CRavidCircle<double> operator/(_In_ const CRavidPoint<int>& point);
	CRavidCircle<double> operator/(_In_ const CRavidPoint<long long>& point);
	CRavidCircle<double> operator/(_In_ const CRavidPoint<float>& point);
	CRavidCircle<double> operator/(_In_ const CRavidPoint<double>& point);
	CRavidCircle<double> operator/(_In_ const CRavidLine<int>& line);
	CRavidCircle<double> operator/(_In_ const CRavidLine<long long>& line);
	CRavidCircle<double> operator/(_In_ const CRavidLine<float>& line);
	CRavidCircle<double> operator/(_In_ const CRavidLine<double>& line);
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

	virtual CRavidQuadrangle<double> GetMinimumEnclosingRectangle();

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

	virtual bool GetRadius(_Out_ int& nRadius);
	virtual bool GetRadius(_Out_ int* pRadius);
	virtual bool GetRadius(_Out_ long long& nRadius);
	virtual bool GetRadius(_Out_ long long* pRadius);
	virtual bool GetRadius(_Out_ float& fRadius);
	virtual bool GetRadius(_Out_ float* pRadius);
	virtual bool GetRadius(_Out_ double& dblRadius);
	virtual bool GetRadius(_Out_ double* pRadius);

	virtual bool GetDiameter(_Out_ int& nDiameter);
	virtual bool GetDiameter(_Out_ int* pDiameter);
	virtual bool GetDiameter(_Out_ long long& nDiameter);
	virtual bool GetDiameter(_Out_ long long* pDiameter);
	virtual bool GetDiameter(_Out_ float& fDiameter);
	virtual bool GetDiameter(_Out_ float* pDiameter);
	virtual bool GetDiameter(_Out_ double& dblDiameter);
	virtual bool GetDiameter(_Out_ double* pDiameter);

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
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidRect<int>* pRpImageSize) override;
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidRect<int>* pRpImageSize) override;

	double GetCircumference();

	virtual double GetAngle() override;

	bool SetCircle(_In_ int x, _In_ int y, _In_ double radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ long long x, _In_ long long y, _In_ double radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ float x, _In_ float y, _In_ double radius, _In_ double angle = 0., _In_ double startDeg = 0., _In_ double deltaDeg = 360., _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ double x, _In_ double y, _In_ double radius, _In_ double angle, _In_ double startDeg = 0, _In_ double deltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidCircle<int>& cir);
	bool SetCircle(_In_ CRavidCircle<int>* pCir);
	bool SetCircle(_In_ CRavidCircle<long long>& cir);
	bool SetCircle(_In_ CRavidCircle<long long>* pCir);
	bool SetCircle(_In_ CRavidCircle<float>& cir);
	bool SetCircle(_In_ CRavidCircle<float>* pCir);
	bool SetCircle(_In_ CRavidCircle<double>& cir);
	bool SetCircle(_In_ CRavidCircle<double>* pCir);
	bool SetCircle(_In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2, _In_ int x3, _In_ int y3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ long long x1, _In_ long long y1, _In_ long long x2, _In_ long long y2, _In_ long long x3, _In_ long long y3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ float x1, _In_ float y1, _In_ float x2, _In_ float y2, _In_ float x3, _In_ float y3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ double x1, _In_ double y1, _In_ double x2, _In_ double y2, _In_ double x3, _In_ double y3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidPoint<int>& rpPoint1, _In_ CRavidPoint<int>& rpPoint2, _In_ CRavidPoint<int>& rpPoint3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidPoint<int>* pRpPoint1, _In_ CRavidPoint<int>* pRpPoint2, _In_ CRavidPoint<int>* pRpPoint3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidPoint<long long>& rpPoint1, _In_ CRavidPoint<long long>& rpPoint2, _In_ CRavidPoint<long long>& rpPoint3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidPoint<long long>* pRpPoint1, _In_ CRavidPoint<long long>* pRpPoint2, _In_ CRavidPoint<long long>* pRpPoint3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidPoint<float>& rpPoint1, _In_ CRavidPoint<float>& rpPoint2, _In_ CRavidPoint<float>& rpPoint3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidPoint<float>* pRpPoint1, _In_ CRavidPoint<float>* pRpPoint2, _In_ CRavidPoint<float>* pRpPoint3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidPoint<double>& rpPoint1, _In_ CRavidPoint<double>& rpPoint2, _In_ CRavidPoint<double>& rpPoint3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	bool SetCircle(_In_ CRavidPoint<double>* pRpPoint1, _In_ CRavidPoint<double>* pRpPoint2, _In_ CRavidPoint<double>* pRpPoint3, _In_ double dblAngle = 0, _In_ double dblStartDeg = 0, _In_ double dblDeltaDeg = 360, _In_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);

	bool IsArc();

	bool SetArcClosingMethod(_In_ ERavidArcClosingMethod eClosingMethod);
	ERavidArcClosingMethod GetArcClosingMethod();

	virtual bool Inflate(_In_ int nRadius) override;
	virtual bool Inflate(_In_ long long llRadius) override;
	virtual bool Inflate(_In_ float fRadius) override;
	virtual bool Inflate(_In_ double dblRadius) override;

	virtual bool Deflate(_In_ int nRadius) override;
	virtual bool Deflate(_In_ long long llRadius) override;
	virtual bool Deflate(_In_ float fRadius) override;
	virtual bool Deflate(_In_ double dblRadius) override;

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

	double ConvertPointToDegree(_In_ CRavidPoint<int>& point);
	double ConvertPointToDegree(_In_ CRavidPoint<int>* pPoint);
	double ConvertPointToDegree(_In_ CRavidPoint<long long>& point);
	double ConvertPointToDegree(_In_ CRavidPoint<long long>* pPoint);
	double ConvertPointToDegree(_In_ CRavidPoint<float>& point);
	double ConvertPointToDegree(_In_ CRavidPoint<float>* pPoint);
	double ConvertPointToDegree(_In_ CRavidPoint<double>& point);
	double ConvertPointToDegree(_In_ CRavidPoint<double>* pPoint);

	CRavidPoint<double> ConvertDegreeToPoint(_In_ int deg);
	CRavidPoint<double> ConvertDegreeToPoint(_In_ long long deg);
	CRavidPoint<double> ConvertDegreeToPoint(_In_ float deg);
	CRavidPoint<double> ConvertDegreeToPoint(_In_ double deg);

	bool GetOuterMostPoints(_Out_ CRavidGeometryArray* pRga);

	CRavidPoint<T> rpCenter;
	T radius = 0;
	double angle = 0.;
	double startDeg = 0.;
	double deltaDeg = 360.;

protected:
	ERavidArcClosingMethod eArcClosingMethod = ERavidArcClosingMethod_EachOther;

protected:
	CRavidGeometryArray * m_pExclusiveRegion = nullptr;
};

