#include <iostream>
#include <cmath>
#include "polygon.h"
#include "segment.h"


namespace geometry
{
	Polygon::Polygon(Point point1, Point point2, Point point3)
	{
		_vertexes.push_back(point1);
		_vertexes.push_back(point2);
		_vertexes.push_back(point3);
	}

	void Polygon::show()
	{
		std::cout << "[ ";
		for (int i = 0; i < _vertexes.size(); i++)
		{
			std::cout << i << _vertexes[i].toString() << " ";
		}
		std::cout << "]" << std::endl;
	}

	void Polygon::addPoint(Point newPoint)
	{
		_vertexes.push_back(newPoint);
	}

	void Polygon::setPointX(int pointNumber, double x)
	{
		_vertexes[pointNumber].setX(x);
	}

	void Polygon::setPointY(int pointNumber, double y)
	{
		_vertexes[pointNumber].setY(y);
	}

	void Polygon::setPointXY(int pointNumber, double x, double y)
	{
		setPointX(pointNumber, x);
		setPointY(pointNumber, y);
	}

	int Polygon::vertexesNumber() const
	{
		return _vertexes.size();
	}

	double Polygon::getPointX(int pointNumber) const
	{
		return _vertexes[pointNumber].x();
	}

	double Polygon::getPointY(int pointNumber) const
	{
		return _vertexes[pointNumber].y();
	}

	Point& Polygon::getPoint(int pointNumber) const
	{
		Point returnPoint = _vertexes[pointNumber];

		return returnPoint;
	}

	double Polygon::perimeter() const
	{
		double peri = 0;

		for (int i = 0; i < _vertexes.size() - 1; i++)
		{

			Point a = _vertexes[i];
			Point b = _vertexes[i + 1];

			Segment segAB(a, b);
			peri += segAB.length();
		}

		// Dernière boucle segment
		Point a = _vertexes[_vertexes.size() - 1];
		Point b = _vertexes[0];

		Segment segAB(a, b);
		peri += segAB.length();

		return peri;
	}

}