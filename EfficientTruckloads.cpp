//
// Created by Satori on 2022/8/26.
//

#include "EfficientTruckloads.h"
#include <iostream>
#include <vector>
using namespace std;

EfficientTruckloads::EfficientTruckloads() {
    vector<int> temp(10000,0);
    TrucksTable = temp;
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates<= 0 || loadSize <=0){
        cout<< "ERROR" << endl;
        return 0;
    }
    if(numCrates <= loadSize && numCrates > 0){
        return 1;
    }
    cout<< "TrucksTable at " << numCrates << " is " << TrucksTable.at(numCrates) << endl;
    if (TrucksTable.at(numCrates) > 0){
        return TrucksTable.at(numCrates);
    }
    TrucksTable.at(numCrates) = numTrucks(numCrates/2,loadSize) + numTrucks(numCrates-numCrates/2,loadSize);
    return TrucksTable.at(numCrates);

}

EfficientTruckloads::~EfficientTruckloads() {}
