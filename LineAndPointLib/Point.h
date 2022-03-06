#pragma once

class Point {
public:
	Point(double x, double y) {
		setX(x);
		setY(y);
	}
	Point(double x) : Point(x, 0.0) {}
	Point() : Point(0.0, 0.0) {}
	void setX(double a);
	void setY(double a);
	double getX();
	double getY();
private:
	double x;
	double y;
};
