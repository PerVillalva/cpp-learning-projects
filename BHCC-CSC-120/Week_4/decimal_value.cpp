// This program asks the user to enter the fNumerator
// and denominator of a fraction, and it displays the
// decimal value.

#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    double fNumerator, fDenominator;

    // Prompt User
    cout << "Enter the fraction numerator: ";
    cin >> fNumerator;

    cout << "Enter the fraction denominator: ";
    cin >> fDenominator;

    // Calculate the decimal value and print the result
    cout << "The decimal value is "
        << (fNumerator / fDenominator) << '\n';

    return 0;
}
