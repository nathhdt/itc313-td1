#include <iostream>
#include <cmath>
#include "segment.h"


namespace geometry
{
	Segment::Segment(double x_a, double y_a, double x_b, double y_b)
	: _x_a(x_a), _y_a(y_a), _x_b(x_b), _y_b(y_b)
	{

	}

	Segment::Segment(Point _a, Point _b)
	: _x_a(_a.x()), _y_a(_a.y()), _x_b(_b.x()), _y_b(_b.y())
	{

	}

	void Segment::moveA(double x_a, double y_a)
	{
		_x_a += x_a;
		_y_a += y_a;
	}

	void Segment::moveB(double x_b, double y_b)
	{
		_x_b += x_b;
		_y_b += y_b;
	}

	Point& Segment::pointA() const
	{
		Point segPointA(_x_a, _y_a);

		return segPointA;
	}

	Point& Segment::pointB() const
	{
		Point segPointB(_x_b, _y_b);

		return segPointB;
	}

	std::string Segment::display() const
	{
		std::string toStr = "A(" + std::to_string(_x_a).substr(0, std::to_string(_x_a).find(".") + 2) + ";" + std::to_string(_y_a).substr(0, std::to_string(_y_a).find(".") + 2) + "), B(" + std::to_string(_x_b).substr(0, std::to_string(_x_b).find(".") + 2) + ";" + std::to_string(_y_b).substr(0, std::to_string(_y_b).find(".") + 2) + ")";
		return toStr;
	}

	double Segment::length() const
	{
		double segLength = sqrt(pow(_x_b - _x_a, 2) + pow(_y_b - _y_a, 2));
		return segLength;
	}

	Point& Segment::middle() const
	{
		double middleX = _x_a + ((_x_b - _x_a) / 2);
		double middleY = _y_a + ((_y_b - _y_a) / 2);

		Point middlePoint(middleX, middleY);

		return middlePoint;
	}
}