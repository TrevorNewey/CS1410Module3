// File: functionsStruct.cpp
// Created by Trevor Newey on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//
/*
 * Task create a function that displays the
 * x and y coordinate of a point.
 */
#include <iostream>
using namespace std;
// Constants & Structures
struct Point{
    float x; //x value
    float y; //y value
};
// Prototypes
void displayPoint(struct Point p); //This must be declared after the structures


// Main Program Program
int main() {
    Point first = {2,8};
    displayPoint(first);
    return 0;

}

// Function Definitions

void displayPoint(struct Point p){
    cout <<"x = " <<p.x<<endl;
    cout <<"y = " <<p.y<<endl;
}