#include <iostream>
#include "point.h"
#include "segment.h"
#include "polygon.h"
#include "triangle.h"


using namespace geometry;

int main()
{
	std::cout << "On crée un point p1" << std::endl;
	Point p1(1, 1);
	std::cout << "p1" << p1.toString() << std::endl;

	std::cout << "On crée un point p2" << std::endl;
	Point p2(3, 4);
	std::cout << "p2" << p2.toString() << std::endl;

	std::cout << "On bouge p2 de (2,1)" << std::endl;
	p2.move(2, 1);
	std::cout << "p2" << p2.toString() << std::endl;

	std::cout << "On remet à l'origine p1" << std::endl;
	p1.reset();
	std::cout << "p1" << p1.toString() << std::endl;

	std::cout << "Distance du point p1 à p2: " << p2.distance(p1) << std::endl;

	std::cout << "Distance du point p1 à p2 (2nde fonction): " << distance2(p1, p2) << std::endl;

	std::cout << "On crée un point p2Sym symétrie de p2 par rapport à l'origine" << std::endl;
	Point p2Sym = p2.symmetric();
	std::cout << "p2Sym" << p2Sym.toString() << std::endl;

	std::cout << "On crée un point p2SymBis symétrie de p2 par rapport à p2Sym" << std::endl;
	Point p2SymBis = p2.symmetric(p2Sym);
	std::cout << "p2SymBis" << p2SymBis.toString() << std::endl;

	std::cout << "On crée un segment composé de p1 et de p2" << std::endl;
	Segment segP1P2(p1, p2);
	std::cout << "segP1P2: " << segP1P2.display() << std::endl;

	std::cout << "On bouge le point A du segment de (1,1)" << std::endl;
	segP1P2.moveA(1, 1);
	std::cout << "segP1P2: " << segP1P2.display() << std::endl;

	std::cout << "On récupère le point A du segment pour le mettre dans p1" << std::endl;
	p1 = segP1P2.pointA();
	std::cout << "p1" << p1.toString() << std::endl;

	std::cout << "Taille du segment: " << segP1P2.length() << std::endl;

	std::cout << "On récupère le point midSeg du milieu du segment" << std::endl;
	Point midSeg = segP1P2.middle();
	std::cout << "midSeg" << midSeg.toString() << std::endl;

	std::cout << "On initialise un polygône poly1(p1, p2, p2Sym)" << std::endl;
	Polygon poly1(p1, p2, p2Sym);
	poly1.show();

	std::cout << "On ajoute le point p2SymBis dans le polygône poly1" << std::endl;
	poly1.addPoint(p2SymBis);
	poly1.show();

	std::cout << "On modifie la coordonnée X et Y du point 2" << std::endl;
	poly1.setPointXY(2, 44, 44);
	poly1.show();

	std::cout << "Valeur X du point 1 du polygône: " << poly1.getPointX(1) << std::endl;

	std::cout << "Valeur Y du point 3 du polygône: " << poly1.getPointY(3) << std::endl;

	std::cout << "On récupère le point 0 du polygône dans un nouveau point qu'on appelle polPoint1" << std::endl;
	Point polPoint1 = poly1.getPoint(0);
	std::cout << "polPoint1" << polPoint1.toString() << std::endl;

	std::cout << "Nombre de sommets du polygône poly1: " << poly1.vertexesNumber() << std::endl;

	std::cout << "Périmètre du polygône poly1: " << poly1.perimeter() << std::endl;

	std::cout << "On crée un triangle tri1(p1, p2, p2Sym)" << std::endl;
	Triangle tri1(p1, p2, p2Sym);
	tri1.show();
	
	std::cout << "On modifie la coordonnée X et Y du point 0" << std::endl;
	tri1.setPointXY(0, 2, -2);
	tri1.show();

	std::cout << "Aire du triangle: " << tri1.getArea() << std::endl;























	return 0;
}
