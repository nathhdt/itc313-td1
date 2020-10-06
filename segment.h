#include <string>
#include "point.h"


#ifndef SEGMENT_H
#define SEGMENT_H


namespace geometry
{
	class Segment
	{
		public:
			Segment(double x_a, double y_a, double x_b, double y_b);
			Segment(Point _a, Point _b);
			void moveA(double x_a, double y_a);
			void moveB(double x_b, double y_b);
			Point& pointA() const;
			Point& pointB() const;
			std::string display() const;
			double length() const;
			Point& middle() const;
		private:
			double _x_a;
			double _y_a;
			double _x_b;
			double _y_b;
	};
}


#endif