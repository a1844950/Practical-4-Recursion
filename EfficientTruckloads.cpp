
#include "EfficientTruckloads.h"
#include <iostream>
#include <vector>
using namespace std;
int CratesArray[10000];
EfficientTruckloads::EfficientTruckloads() {}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }
    if (CratesArray[numCrates] != 0) {
        return CratesArray[numCrates];
    }
    else {
        if (numCrates % 2 == 0) {
            CratesArray[numCrates] = numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates / 2, loadSize);
            return CratesArray[numCrates];
        }
        else {
            CratesArray[numCrates] = numTrucks(numCrates / 2, loadSize) + numTrucks((numCrates / 2) + 1, loadSize);
            return CratesArray[numCrates];
        }
    }

}

EfficientTruckloads::~ EfficientTruckloads() {}
