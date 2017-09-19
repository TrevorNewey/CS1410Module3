// File: functionsReturn
// Created by Trevor Newey on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//
/*
 * Task: Define a function that takes on e input parameter
 * (integer), it increments the value by one,
 * and it returns the new value to user
 */
#include <iostream>
using namespace std;

// Constants
// Prototypes
int incrementInt(int i);
void ReallyIncrementInt(int &i);
// Main Program

int main() {

    int num = 0;
    int num2 = 0;
    cout << "num = " <<num<<endl;
    num2 = incrementInt(num);
    cout <<"Num 2 = "<<num2<<endl;
    incrementInt(num);
    cout << "Address of a num: " <<&num<<endl;
    ReallyIncrementInt(num);
    return 0;

}

// Function Definitions
//Here we are PASSING PARAMETERS BY VALUE!!!
int incrementInt(int i){
    cout<<"Address of i inside IncrementInt= " << &i << endl;
    i +=1;
    return i; //This returns i
}
//Increment original integer by 1
void ReallyIncrementInt(int &i){ //Here we are passing the paramenter by REFERENCE! REQUIRES an address of an integer.
    cout<<"Address of i inside ReallyIncrementInt= " << &i << endl;
    i++;
}