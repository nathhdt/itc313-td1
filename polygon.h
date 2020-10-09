#include <string>
#include "point.h"


#ifndef POLYGON_H
#define POLYGON_H


namespace geometry
{
	class Polygon
	{
		public:
			Polygon(int vertex);
		private:
			int _vertex;
			Point _vertex_points[];
	};
}


#endif