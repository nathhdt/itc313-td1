#include "polygon.h"


#ifndef TRIANGLE_H
#define TRIANGLE_H


namespace geometry
{
	class Triangle : public Polygon
	{
		public:
			Triangle(Point point1, Point point2, Point point3);
			double getArea() const;
		private:
			// Change les fonction héritée de Polygon en private pour ne plus pouvoir les utiliser en public
			using Polygon::addPoint;
			using Polygon::vertexesNumber;
	};
}


#endif