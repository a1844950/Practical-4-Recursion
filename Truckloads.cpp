#include "Truckloads.h"
#include <iostream>
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= 0 || loadSize <= 0)  return 0;
    if (numCrates <= loadSize)  return 1;
    if (numCrates % 2 == 0) 
        return numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates / 2, loadSize);
    else 
        return numTrucks(numCrates / 2, loadSize) + numTrucks((numCrates / 2) + 1, loadSize);
}
