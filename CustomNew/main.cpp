#include "CustomNew.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	SmartPoint p1(5);
	SmartPoint p2(2);
	SmartPoint p3(7);
	printf("%d\n", *p1);
	printf("%p\n", &p1);
	p2 = p1;
	p1 = p3;
	return 0;
}