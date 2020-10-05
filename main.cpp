#include <iostream>
#include "point.h"


using namespace geometry;

int main(int argc, char const *argv[])
{

	for (int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << std::endl;
	}

	Point p1(1.1, 2.2);
	std::cout << "Point p1(" << p1.x() << ", " << p1.y() << ")" << std::endl;

	return 0;
}
