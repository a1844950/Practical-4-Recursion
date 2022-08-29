#include "EfficientTruckloads.h"
#include <iostream>
using namespace std;

EfficientTruckloads::EfficientTruckloads() {
}

int numCratesArray[10000];

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= 0 || loadSize <= 0) {
        return 0;
    }
    if (numCrates <= loadSize && numCrates > 0) {
        return 1;
    }
    if (numCratesArray[numCrates] != 0) {
        return numCratesArray[numCrates];
    }
    else {

        if (numCrates % 2 == 0) {
            numCratesArray[numCrates] = numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates / 2, loadSize);
            return numCratesArray[numCrates];
        }
        else {
            numCratesArray[numCrates] = numTrucks(numCrates / 2, loadSize) + numTrucks((numCrates / 2) + 1, loadSize);
            return numCratesArray[numCrates];
        }
    }

}

EfficientTruckloads::~EfficientTruckloads() {}
