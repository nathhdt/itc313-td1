#include <string>
#include "point.h"
#include <vector>


#ifndef POLYGON_H
#define POLYGON_H


namespace geometry
{
	class Polygon
	{
		public:
			Polygon(Point _point1, Point _point2, Point _point3);
			void addPoint(Point _newPoint);
			void show();
		private:
			std::vector<Point> _vertexes;
	};
}


#endif