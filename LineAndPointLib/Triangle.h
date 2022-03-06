#pragma once
#include "Line.h"
#include "Point.h"
#include <stdio.h>

class Triangle {
public:
	Triangle(double l1, double l2, double l3);
	Triangle(Point p1, Point p2, Point p3) : Triangle(Line(p1, p2).Len(), Line(p1, p3).Len(), Line(p2, p3).Len()) {}
	//Triangle(Point p1, Point p2) : Triangle(p1, p2, { 0, 0 }) {}
	//Triangle(Point p1) : Triangle(p1, { 0, 0 }, { 0, 0 }) {}
	//Triangle() : Triangle(0, 0, 0) {}

	double Square();
private:
	double Line_len1;
	double Line_len2;
	double Line_len3;

	int ExistCheck(double l1, double l2, double l3);
};
