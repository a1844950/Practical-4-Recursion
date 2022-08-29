#include <iostream>
#include <string>
#include "TruckLoads.h"

TruckLoads::TruckLoads(){

}
TruckLoads::numTrucks(int numCrates, int loadSize){
    if (loadSize >= numCrates)
        return 1;
		return numTrucks(numCrates/2 + numCrates%2, loadSize)
		        + numTrucks(numCrates/2, loadSize);
	}
}