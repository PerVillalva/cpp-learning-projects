// This program asks the user to enter the length and width of
// a rectangle. It calculates the rectangle's area and displays
// the value on the screen.

#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    double length, width, area;

    // Prompt User
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the area
    area = length * width;

    // Print the final result
    cout << "Area of the rectangle is: " << area << '\n';

    return 0;
}