#include "Line.h"
#include <math.h>

Point Line::getP1() {
	return this->p1;
}
Point Line::getP2() {
	return this->p2;
}
void Line::setP1(Point p) {
	this->p1 = p;
}
void Line::setP2(Point p) {
	this->p2 = p;
}
double Line::Len() {
	return (sqrt((this->p1.getX() - this->p2.getX()) * (this->p1.getX() - this->p2.getX()) + (this->p1.getY() - this->p2.getY()) * (this->p1.getY() - this->p2.getY())));
}