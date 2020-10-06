#include <string>


#ifndef POINT_H
#define POINT_H


namespace geometry
{
	class Point
	{
		public:
			Point(double x, double y);
			double x() const;
			double y() const;
			std::string toString() const;
			void move(double _dx, double _dy);
			double distance(Point _p) const;
			void reset();
			Point& symmetric() const;
			Point& symmetricPoint(Point _pSym) const;
		private:
			double _x;
			double _y;
	};
}


#endif