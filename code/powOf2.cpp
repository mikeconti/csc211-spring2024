#include <iostream>

// write a single while loop that prints the first 8 powers of 2, no cmath allowed.
// What are the powers of 2?
// 1, 2, 4, 8, 16, 32, 64, etc...

int main(){

    int exp = 0;
    int value = 0;

    while(exp < 8){

        if(exp == 0){
            value = 1;
        }
        else{
            value *= 2;
        }
        exp++;
        
        std::cout << value << " ";

    }




    return 0;
}