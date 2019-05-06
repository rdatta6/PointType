//
// Created by Rohan Datta on 2019-04-26.
//

#include "pointType.h"



istream& operator>>(istream& obj, pointType& x){
    cout << "Enter the x and y coordinates of a point: ";
    obj >> x.xCoor >> x.yCoor; //input points
    return obj;
}

ostream& operator<<(ostream& obj, pointType& x){
    obj << "X-coordinate is: " << x.xCoor << ", Y-coordinate is: " << x.yCoor << endl;
    return obj;//output points
}

double pointType::operator+(const pointType &x) const {
    double y = pow((pow((x.xCoor - xCoor),2) + pow((x.yCoor - yCoor),2)),0.5);//calculate pythagorean distance
    cout << "Distance is: " << y << endl;
    return y;
}

pointType& pointType::operator=(const pointType &x) {
    if (this != & x) {//assign coordinates to a new point
        xCoor = x.xCoor;
        yCoor = x.yCoor;
    }
    return *this;
}

bool pointType::operator==(const pointType &x) const {
    if ((this->xCoor == x.xCoor) && (this->yCoor == x.yCoor)){//check equality of both coordinates
        cout << "Point are equal" << endl;
        return true;
    }
    else {
        cout << "Point are not equal" << endl;
        return false;
    }
}
bool pointType::operator!=(const pointType &x) const {
    if ((this->xCoor != x.xCoor) || (this->yCoor != x.yCoor)){//check inequality of either coordinate (both comparisons are individually sufficient)
        cout << "Point are not equal" << endl;
        return true;
    }
    else {
        cout << "Point are equal" << endl;
        return false;
    }
}