#pragma once
#include "Point.h"

class Line {
public:
	Line(Point p1, Point p2) {
		setP1(p1);
		setP2(p2);
	}
	Line(Point p) : Line(p, { 0.0, 0.0 }) {}
	Line() : Line({ 0.0, 0.0 }, { 0.0, 0.0 }) {}
	void setP1(Point p);
	void setP2(Point p);
	Point getP1();
	Point getP2();
	double Len();
private:
	Point p1;
	Point p2;
};
