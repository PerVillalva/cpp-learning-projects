// This program calculates the area of a circle.
// The formula for the area of a circle is Pi times
// the radius squared. Pi is 3.14159.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // constexpr provides the same immutability as const but also guarantees that the value is known
    // at compile time, leading to more efficient code, as the compiler can replace PI with its value
    // directly in the generated machine code. Only available in C++11 and newer version.
    constexpr double PI =  3.14159;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area
    const double area = pow(radius, 2) * PI;

    // Display the result
    cout << "The area of the circle is: "
        << area
        << '\n';

    return 0;
}