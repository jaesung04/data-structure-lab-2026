#include <iostream>
#include "sportscar.h"

using namespace std;

SportsCar::SportsCar(int s, const char* n, int g, bool bT)
    : Car(s, n, g)
{
    bTurbo = bT;
}

void SportsCar::setTurbo(bool bTur) { bTurbo = bTur; }

void SportsCar::speedUp() {
    if (bTurbo)
        speed += 20;
    else
        Car::speedUp();
}

int main() {
    int speed = 100;
    int gear = 5;
    const char* name = "Ferrari";
    bool turbo = true;

    SportsCar car(speed, name, gear, turbo);

    car.speedUp();
    car.display();
    car.whereAmI();

    return 0;
}