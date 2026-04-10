#pragma once
#include <cstdio>
#include <cstring>

class Car {
protected:
	int speed;
	char name[40];
public:
	int gear;
	Car(int s, const char* n, int g)
		: speed(s), gear(g) {
		strcpy_s(name, n);
	}
	void changeGear(int g = 4) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : gear=%d speed=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("Object adress= %p\n", this);
	}
};
