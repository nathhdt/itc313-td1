#include <iostream>
#include <cmath>
#include "polygon.h"


namespace geometry
{
	Polygon::Polygon(Point _point1, Point _point2, Point _point3)
	{
		_vertexes.push_back(_point1);
		_vertexes.push_back(_point2);
		_vertexes.push_back(_point3);
	}

	void Polygon::show()
	{
		for (int i = 0; i < _vertexes.size(); i++)
		{
			std::cout << _vertexes[i].toString() << ' ';
		}
	}

}