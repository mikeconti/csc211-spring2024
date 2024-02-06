// Write a program in C++ (on paper) that:
// reads the number of hours
// calculates payment:
// if number of hours no greater than 40, payment is calculated using the regular 
// hourly rate of $35
// if overtime, payment is calculated using the regular hourly rate for the first  
// 40 hours and the special rate of $50 for the remaining hours
// prints the calculated payment

#include <iostream>

int main(){

    int hoursWorked, paymentTotal, flatRate = 35, overtimeRate = 50;

    std::cout << "Enter the number of hours worked: " << std::endl;

    std::cin >> hoursWorked;

    if(hoursWorked <= 40){
        paymentTotal = hoursWorked * flatRate;
    }
    else if(hoursWorked > 40){
        paymentTotal = (flatRate * 40) + ((hoursWorked - 40) * overtimeRate);
    }

    std::cout << "you earned " << paymentTotal << " this pay period";


    return 0;
}