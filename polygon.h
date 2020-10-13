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
			Polygon(Point point1, Point point2, Point point3);
			void show();
			void addPoint(Point newPoint);
			void setPointX(int pointNumber, double x);
			void setPointY(int pointNumber, double y);
			void setPointXY(int pointNumber, double x, double y);
			int vertexesNumber() const;
			double getPointX(int pointNumber) const;
			double getPointY(int pointNumber) const;
			Point& getPoint(int pointNumber) const;
			double perimeter() const;
		private:
			std::vector<Point> _vertexes;
	};
}


#endif