#include "CustomNew.h"
#include <stdlib.h>
#include <stdio.h>

SmartPoint::SmartPoint(int a) {
	p = new int(a);
	count = 1;
}

SmartPoint::~SmartPoint() {
	if (*p == NULL) {
		printf("Null\n");
	}
	else {
		printf("delete\n");
		delete p;
		*p = NULL;
	}
}