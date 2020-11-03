#include <iostream>
#include <cmath>
#include "triangle.h"
#include "polygon.h"
#include "segment.h"


namespace geometry
{
	Triangle::Triangle(Point point1, Point point2, Point point3)
	: Polygon(point1, point2, point3)
	{

	}

	double Triangle::getArea() const
	{
		// Formule de Héron

		// On crée les 3 segments du triangle
		Segment AB(getPoint(0), getPoint(1));
		Segment BC(getPoint(1), getPoint(2));
		Segment CA(getPoint(2), getPoint(0));

		// On récupère le périmètre
		double p = perimeter();

		// Calcul de l'aire
		double area =  sqrt(p * (p - AB.length()) * (p - BC.length()) * (p - CA.length())) / 4;

		return area;
	}
}