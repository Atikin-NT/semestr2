#pragma once
#include <stdio.h>


class SmartPoint {
public:
	SmartPoint(int a);
	~SmartPoint();
    int* operator&() const { return p; }
    int& operator* () { return *p; }
    SmartPoint& operator=(SmartPoint& a)
	{
		count -= 1;
		if (count == 0) {
			delete p;
			printf("Delete\n");
		}
		p = a.p;
        count = a.count;
		a.count += 1;
		
        return *this;
	}
private:
	int* p;
	int count;
	int size;
};