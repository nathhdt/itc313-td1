#include <iostream>
#include "point.h"


using namespace geometry;

int main(int argc, char const *argv[])
{
	Point p1(1.1, 2.2);
	std::cout << "Point p1(" << p1.x() << ", " << p1.y() << ")" << std::endl;

	p1.move(1, 1);
	std::cout << "Point p1(" << p1.x() << ", " << p1.y() << ")" << std::endl;

	return 0;
}
