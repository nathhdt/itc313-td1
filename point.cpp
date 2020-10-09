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

	void Point::setX(double x)
	{
		_x = x;
	}

	void Point::setY(double y)
	{
		_y = y;
	}

	void Point::setXY(double x, double y)
	{
		setX(x);
		setY(y);
	}

	void Point::move(double dx, double dy)
	{
		setXY(_x + dx, _y + dy);
	}

	double Point::distance(Point p) const
	{
		double distX = p.x() - _x;
		double distY = p.y() - _y;

		return sqrt(distX * distX + distY * distY);
	}

	void Point::reset()
	{
		setX(0);
		setY(0);
	}

	Point& Point::symmetric(Point center) const
	{
		double symX = 2 * center.x() - _x;
		double symY = 2 * center.y() - _y;

		Point symPoint(symX, symY);

		return symPoint;
	}

	// Fonction hors-classe
	double distance2(Point a, Point b)
	{
		return a.distance(b);
	}
}