#include <iostream>
#include "point.h"


using namespace geometry;

int main(int argc, char const *argv[])
{
	Point p1(1, 0);
	std::cout << "Point p1(" << p1.x() << ", " << p1.y() << ")" << std::endl;

	p1.move(1, 0);
	std::cout << "Point p1(" << p1.x() << ", " << p1.y() << ")" << std::endl;

	Point p2(4, 0);
	std::cout << "Point p2(" << p2.x() << ", " << p2.y() << ")" << std::endl;

	std::cout << "Distance entre p1 et p2: " << p1.distance(p2) << std::endl;

	return 0;
}
