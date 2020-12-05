#include <iostream>

unsigned binarySearch(unsigned* array, unsigned size, unsigned expectedNumber){
    
    unsigned lowIndex = 0;
    unsigned highIndex = size - 1;
    unsigned currentNumber = 0;
    unsigned mid = 0;

    while(lowIndex <= highIndex) {

        mid = (highIndex + lowIndex) / 2;
        currentNumber = array[mid];

        if(currentNumber == expectedNumber){
            return mid;
        } 
        if(currentNumber < expectedNumber){
            lowIndex = mid + 1;  
        } else if (currentNumber > expectedNumber) {
            highIndex = mid - 1;
        }
    }

    return 777;
}

int main(){

    unsigned array[] = {1,2,3,4,5,6,7,8,9,10};
    unsigned result = binarySearch(array, 10, 8);
    
    std::cout << result << "\n";

    return 0;

}
