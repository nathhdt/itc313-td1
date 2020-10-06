#include <iostream>
#include "point.h"


using namespace geometry;

int main()
{
	Point p1(1, 0);
	std::cout << "Point p1(" << p1.x() << ", " << p1.y() << ")" << std::endl;

	std::cout << "On bouge p1 de 1 sur x" << std::endl;
	p1.move(1, 0);
	std::cout << "Point p1(" << p1.x() << ", " << p1.y() << ")" << std::endl;

	Point p2(2, 3);
	std::cout << "Point p2(" << p2.x() << ", " << p2.y() << ")" << std::endl;

	std::cout << "Distance entre p1 et p2: " << p1.distance(p2) << std::endl;


	
	std::cout << "Mise à l'origine du point p1" << std::endl;
	p1.reset();
	std::cout << "Point p1(" << p1.x() << ", " << p1.y() << ")" << std::endl;

	Point p3 = p2.symmetric();
	std::cout << "Point p3(" << p3.x() << ", " << p3.y() << ")" << std::endl;

	return 0;
}
