#include <iostream>
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
		std::cout << "P(" << _x << ";" << _y << ")" << std::endl;
	}
}