#include <iostream>
#include <cmath>
#include "point.h"


namespace geometry
{
	Point::Point(double x, double y)
	: _x(x), _y(y)
	{

	}

	double Point::x() const
	{
		return _x;
	}

	double Point::y() const
	{
		return _y;
	}

	std::string Point::toString() const
	{
		std::string toStr = "(" + std::to_string(_x).substr(0, std::to_string(_x).find(".") + 2) + ";" + std::to_string(_y).substr(0, std::to_string(_y).find(".") + 2) + ")";
		return toStr;
	}

	void Point::move(double _dx, double _dy)
	{
		_x += _dx;
		_y += _dy;
	}

	double Point::distance(Point _p) const
	{
		double distX = _p.x() - _x;
		double distY = _p.y() - _y;

		return sqrt(distX * distX + distY * distY);
	}

	void Point::reset()
	{
		_x = 0;
		_y = 0;
	}

	Point& Point::symmetric() const
	{
		Point symPoint(-_x, -_y);

		return symPoint;
	}

	Point& Point::symmetricPoint(Point _pSym) const
	{
		double distPtoSymPX = _x - _pSym.x();
		double distPtoSymPY = _y - _pSym.y();

		Point symPoint(_pSym.x() - distPtoSymPX, _pSym.y() - distPtoSymPY);

		return symPoint;
	}
}