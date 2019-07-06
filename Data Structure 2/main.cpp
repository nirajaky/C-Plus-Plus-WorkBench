#include <iostream>
#include <string.h>

using namespace std;

struct Car {
    char model[100];
    int year;
    int ID;
}myCar,cars[100];

void printingCar(Car var) {
    cout << var.model << endl;
    cout << "ID = " << var.ID << endl;
    cout << "Year : " << var.year << endl;
}

int main()
{
    strcpy(myCar.model, "Maruti 800");
    myCar.year = 2018;
    cout << myCar.model[0] << myCar.model[1] << myCar.model[2] << myCar.model[3];
    cout << myCar.model[4] << endl;
    //-----------------------------------------//
    for(int i=1; i<=100; i++) {
        strcpy(cars[i].model, "Fast and Furious");
        cars[i].ID = i;
        cars[i].year = 2018;
    }

    printingCar(cars[44]);
    printingCar(cars[99]);
    return 0;
}
