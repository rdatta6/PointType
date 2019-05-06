#include <iostream>
#include "pointType.h"

int main() {
    pointType point1;
    pointType point2;
    pointType point4;
    cin >> point1;
    cin >> point2;
    cin >> point4;
    cout << point1;
    cout << point2;
    cout << point4;
    (point1 + point2);
    pointType point3 = point2;
    point3 == point2;
    point1 != point2;
    point4 != point1;
}

/*/Users/rohandatta/CLionProjects/Lab3C/cmake-build-debug/Lab3C
Enter the x and y coordinates of a point: 0 0
Enter the x and y coordinates of a point: 3 4
Enter the x and y coordinates of a point: 0 1
X-coordinate is: 0, Y-coordinate is: 0
X-coordinate is: 3, Y-coordinate is: 4
X-coordinate is: 0, Y-coordinate is: 1
Distance is: 5
Point are equal
Point are not equal
Point are not equal

Process finished with exit code 0*/