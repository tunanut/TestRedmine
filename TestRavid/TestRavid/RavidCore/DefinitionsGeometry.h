#pragma once

namespace Ravid
{
	template <typename T>
	class TPoint
	{
	public:
		T x, y;
	};

	template <typename T>
	class TRect
	{
	public:
		T left, top, right, bottom;
	};
}

template <typename T>
class CRavidPoint;

template <typename T>
class CRavidLine;

template <typename T>
class CRavidRect;

template <typename T>
class CRavidQuadrangle;

template <typename T>
class CRavidCircle;

template <typename T>
class CRavidEllipse;

class CRavidGeometryArray;

class CRavidPolygon;

enum ERavidGeometryShapeType
{
	ERavidGeometryShapeType_Unknown = 0,
	ERavidGeometryShapeType_Point,
	ERavidGeometryShapeType_Line,
	ERavidGeometryShapeType_Rectangle,
	ERavidGeometryShapeType_Quadrangle,
	ERavidGeometryShapeType_Circle,
	ERavidGeometryShapeType_Ellipse,
	ERavidGeometryShapeType_Polygon,
	ERavidGeometryShapeType_Array,
};

enum ERavidGeometryTemplateType
{
	ERavidGeometryTemplateType_Unknown = 0,
	ERavidGeometryTemplateType_Int,
	ERavidGeometryTemplateType_LongLong,
	ERavidGeometryTemplateType_Float,
	ERavidGeometryTemplateType_Double,
};

enum ERavidArcClosingMethod
{
	ERavidArcClosingMethod_NoClose = 0,
	ERavidArcClosingMethod_EachOther,
	ERavidArcClosingMethod_Center,
};

enum ERavidPointsDirection
{
	ERavidPointsDirection_Invalid = 0,
	ERavidPointsDirection_CW,
	ERavidPointsDirection_CCW,
	ERavidPointsDirection_Straight,
};

enum ERavidGeometryOperationType
{
	ERavidGeometryOperationType_Unknown = 0,
	ERavidGeometryOperationType_Intersection,
	ERavidGeometryOperationType_Union,
	ERavidGeometryOperationType_Subtraction,
	ERavidGeometryOperationType_ExclusiveOr,
};

// CRavidMiscMath;
// Function name : static ERavidPointsDirection GetPointsDirection(double x1, double y1, ....)  (CRavidPoint<double>& rp1, CRavidPoint<double>& rp2, ...)
