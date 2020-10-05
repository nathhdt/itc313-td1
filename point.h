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
		private:
			double _x;
			double _y;
	};
}


#endif