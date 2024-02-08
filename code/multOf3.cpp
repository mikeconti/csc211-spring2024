#include <iostream>

// Write a program that prints the average of the first 25 multiples of 3 (excluding 0)



int main(){

    int mult = 0;
    int rollingSum = 0;

    for(int i = 0; i < 25; i++){
        
        mult += 3;
        rollingSum += mult;
    }

    std::cout << (rollingSum / 25) << std::endl;

}