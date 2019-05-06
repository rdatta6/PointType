//
// Created by Rohan Datta on 2019-04-26.
//

#ifndef LAB3C_POINTTYPE_H
#define LAB3C_POINTTYPE_H
#include <iostream>
#include <cmath>

using namespace std;

class pointType {
public:
    double xCoor; //X coordinate
    double yCoor;//Y coordinate
    friend ostream& operator<<(ostream& obj, pointType& x);//output coordinates
    friend istream& operator>>(istream& obj, pointType& x);//input coordinates
    double operator+(const pointType& x) const;//find distance between points
    pointType& operator=(const pointType&);//assign point values to a new point
    bool operator==(const pointType& x) const;//check if points are equal
    bool operator!=(const pointType& x) const;//check if points are not equal
};


#endif //LAB3C_POINTTYPE_H
