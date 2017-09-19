// File: point
// Created by Trevor Newey on 9/19/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
// Constants
const int MAX_X = 10;
const int MAX_Y = 10;
const float IN_CM = 2.54;
struct Point{
    float x; //x coordinate
    float y; //y coordinate
};
// Prototypes
void showPoint(const struct Point &p);
void updatePoint(struct Point &p);
struct Point createPointValue(float x, float y);
struct Point createPoint();
inline float inchesToCm(float val){return val * IN_CM;}; //THis inline will let you do the prototype and the definition at the same time.
// Main Program Program

int main() {

    Point p1 = {2.5,3.1};
    Point p2;
    Point p3;
    showPoint(p1);
    updatePoint(p1);
    showPoint(p1);
    p2 = createPoint();
    p3.x = inchesToCm(p3.x);
    showPoint(p3);

    return 0;
}

// Function Definitions

//Take a constant adress of a structure point.
//you cannot modify the oontent of the structure
void showPoint(const struct Point &p){
    cout << "X-coordinate is " << p.x <<endl;
    cout << "Y-coordinate is " << p.y <<endl;
}
//update x and y by incrementing their value
//by 1
void updatePoint(struct Point &p){
    p.x += 1.0;
    p.y += 1.0;
}

//This will return a point
//since it's returning a value it isn't void
struct Point createPoint(){
    Point p;
    p.x = 0.0;
    p.y = 0.0;
    return p; //this must match what you will be returning
}
struct Point createPointValue(float x, float y){
    Point p;
    p.x = x;
    p.y = y;

    return p;
}