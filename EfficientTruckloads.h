//
// Created by Satori on 2022/8/26.
//

#ifndef WEEK4_EFFICIENTTRUCKLOADS_H
#define WEEK4_EFFICIENTTRUCKLOADS_H

#include <vector>

class EfficientTruckloads {
public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
    ~EfficientTruckloads();    
private:
    std::vector<int> TrucksTable;
};


#endif //WEEK4_EFFICIENTTRUCKLOADS_H
