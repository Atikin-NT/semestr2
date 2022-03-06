#include "Triangle.h"
#include <math.h>

double Triangle::Square() {
	double p = (Line_len1 + Line_len2 + Line_len3) / 2.0;
	return (sqrt(p * (p - Line_len1) * (p - Line_len2) * (p - Line_len3)));
}

int Triangle::ExistCheck(double l1, double l2, double l3) {
	if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2) {
		return 1;
	}
	return 0;
}

Triangle::Triangle(double l1, double l2, double l3) {
	int exist_chek = ExistCheck(l1, l2, l3);
	if (exist_chek == 1) {
		Line_len1 = l1;
		Line_len2 = l2;
		Line_len3 = l3;
	}
	else {
		printf("TriangleDoesNotExistError\n");
		Line_len1 = 0;
		Line_len2 = 0;
		Line_len3 = 0;
	}
}