//
// Created by Satori on 2022/8/26.
//

#include "Truckloads.h"
#include <iostream>
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates<= 0 || loadSize <=0) {
        return 0;
    }
    if(numCrates<=loadSize && numCrates>0) {
        return 1;
    }
    else {
        return numTrucks(numCrates/2,loadSize) + numTrucks(numCrates-numCrates/2,loadSize);
    }
}
