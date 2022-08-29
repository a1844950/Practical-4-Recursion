#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <vector>

class EfficientTruckloads {
public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
    ~EfficientTruckloads();    
private:
    std::vector<int> TrucksTable;
};


#endif //EFFICIENTTRUCKLOADS_H
