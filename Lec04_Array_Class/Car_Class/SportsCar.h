#pragma once
#include "Car.h"

class SportsCar : public Car
{
public:
	bool bTurbo;
	
	SportsCar(int s, const char* n, int g, bool bT);

	void setTurbo(bool bTur);
	void speedUp();
};