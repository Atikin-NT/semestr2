#include <stdio.h>
#include "Triangle.h"
#include "Line.h"
#include "Point.h"

int main() {
	Point p1;
	Point p2;
	Point p3;
	double l1;
	double l2;
	double l3;
	double p;

	int flag_len_or_Point = 0;
	printf_s("Points(1) or lines's lenght(2)?\n");
	scanf_s("%d", &flag_len_or_Point);

	if (flag_len_or_Point == 1) {
		printf_s("Enter Point1, Point2, Point3\n");
		scanf_s("%lf", &p);
		p1.setX(p);
		scanf_s("%lf", &p);
		p1.setY(p);

		scanf_s("%lf", &p);
		p2.setX(p);
		scanf_s("%lf", &p);
		p2.setY(p);

		scanf_s("%lf", &p);
		p3.setX(p);
		scanf_s("%lf", &p);
		p3.setY(p);

		Triangle tr(p1, p2, p3);
		printf("S = %.2lf\n", tr.Square());

	}
	else {
		printf_s("Enter l1, l2, l3\n");
		scanf_s("%lf", &l1);
		scanf_s("%lf", &l2);
		scanf_s("%lf", &l3);

		Triangle tr(l1, l2, l3);
		printf("S = %.2lf\n", tr.Square());
	}
	return 0;
}