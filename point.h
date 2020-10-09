#include <string>


#ifndef POINT_H
#define POINT_H


namespace geometry
{
	class Point
	{
		public:
			Point(double x=0, double y=0);
			double x() const;
			double y() const;
			std::string toString() const;
			void setX(double x);
			void setY(double y);
			void setXY(double x, double y);
			void move(double dx, double dy);
			double distance(Point p) const;
			void reset();
			Point& symmetric(Point center=Point(0.0, 0.0)) const;
		private:
			double _x;
			double _y;
	};

	double distance2(Point a, Point b);
}


#endif