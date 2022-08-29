#include <iostrean>
#include <string>
#include "Reverse.h"

Reverse::Reverse(){
    
}
Reverse::reverseDigit(int num){
    int reversedNumber = 0;
    while (num > 0){
    int d = num % 10;
    reversedNumber = reversedNumber * 10 + d;
    num /= 10;
    }
    return reversedNumber;
}