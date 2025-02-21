// This program asks for the lengths of the two sides of a
// right triangle. The length of the hypotenuse is then
// calculated and displayed.
#include <iostream>
#include <iomanip> // for setprecision
using namespace std; // No math library needed after VS 2015

int main() {
    double a, b, c;

    cout << "Enter the length of the side a: ";
    cin >> a;
    cout << "Enter the length of the side b: ";
    cin >> b;

    // Calculate the hypotenuse
    c = sqrt(pow(a, 2.0) + pow(b, 2.0));

    cout << "The length of the hypotenuse is: "
         << fixed << setprecision(2) // Use fixed to set precision for decimal places
         << c
         << '\n';

    cout << "Press Enter to continue...";
    cin.ignore(); // Skip the newline character left in the input buffer
    cin.get(); // Wait for the user to press Enter

    return 0;
}