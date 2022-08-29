#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

int main() {
    Reverse R1;
    Truckloads T1;
    EfficientTruckloads E1;
//-----------------------------------------------------
    int R01;
    R01 = R1.reverseDigit(11900);
    cout << R01 << endl;
    string R02, R03;
    R02 = R1.reverseString("tttt");
    R03 = R1.reverseString("appa");

//-----------------------------------------------------
    int T01, T02, T03, T04, T05;
    T01 = T1.numTrucks(10,2);
    T02 = T1.numTrucks(17,3);
    T03 = T1.numTrucks(15,3);
    T04 = T1.numTrucks(1024,5);
    cout << T01 << endl;
    cout << T02 << endl;
    cout << T03 << endl;
    cout << T04 << endl;

//-----------------------------------------------------
    int e1, e2, e3, e4;
    e1 = E1.numTrucks(10,2);
    e2 = E1.numTrucks(17,3);
    e3 = E1.numTrucks(15,1);
    e4 = E1.numTrucks(1024,5);
    cout << e1 << endl;
    cout << e2 << endl;
    cout << e3 << endl;
    cout << e4 << endl;
    return 0;
}
