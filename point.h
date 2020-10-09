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
			void setX(double x);
			void setY(double y);
			void setXY(double x, double y);
			void move(double dx, double dy);
			double distance(Point p) const;
			void reset();
			Point& symmetric() const;
			Point& symmetricPoint(Point pSym) const;
		private:
			double _x;
			double _y;
	};
}


#endif