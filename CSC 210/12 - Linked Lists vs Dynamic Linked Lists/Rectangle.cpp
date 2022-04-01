#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include "Rectangle.h"
using namespace std;

// Class Implementation
Rectangle::~Rectangle() {}
Rectangle::Rectangle() {width = 1; height = 1; top = 1; left = 1; angle = 0; timeOfBirth = time(0);}
Rectangle::Rectangle(float w, float h) {width = w; height = h;}
Rectangle::Rectangle(float w, float h, float t, float l) {width = w; height = h; top = t; left = l;}
Rectangle::Rectangle(float w, float h, float t, float l, float a) {width = w; height = h; top = t; left = l; angle = a;}

void Rectangle::set_width(float w) { width = w; }
void Rectangle::set_height(float h) { height = h; }
void Rectangle::set_top(float t) { top = t; }
void Rectangle::set_left(float l) { left = l; }

float Rectangle::calc_factor(float p) { return 1 + p / 100; }
float Rectangle::get_width() { return width; }
float Rectangle::get_height() { return height; }
float Rectangle::get_top() { return top; }
float Rectangle::get_left() { return left; }
float Rectangle::get_area() { return width * height; }

void Rectangle::move(int top_change, int left_change) {top = top + top_change; left = left + left_change;}
void Rectangle::rotate90() {float temp = width; width = height; height = temp;}
void Rectangle::expand(int pct, bool lockAspectRatio)
{
    float fctr = calc_factor(pct);
    if(lockAspectRatio){
        width = width * sqrt(fctr);
        height = height * sqrt(fctr);
    }else{
        width = width * fctr;
        height = height * fctr;
    }
}

float Rectangle::get_perimeter() { return 2 * (width + height); }
float Rectangle::get_diagonal() { return sqrt(pow(width, 2) + pow(height, 2)); }
float Rectangle::get_angle() { return angle; }
void Rectangle::set_angle(float a) { angle = a; }

void Rectangle::set_age(double a) { *ageInSeconds = a; }
double Rectangle::get_age() { return *ageInSeconds; }
time_t Rectangle::get_tOB() { return timeOfBirth; }

void Rectangle::create_array(int arrSize){myDblArray = new double[arrSize];}
void Rectangle::display_array(int arrSize){
    double* localPtr = myDblArray;
    for(int i = 0; i < arrSize; i++)
    {
        cout << * localPtr << " "; localPtr++;
    }
    cout << endl;
}