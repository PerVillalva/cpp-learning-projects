// This program calculates the average
// of three test scores.

#include <iostream>
using namespace std;

int main() {
    double score1, score2, score3;

    cout << "Enter the first test score: ";
    cin >> score1;

    cout << "Enter the second test score: ";
    cin >> score2;

    cout << "Enter the third test score: ";
    cin >> score3;

    // Calculate test score average
    double const scoreAvg = (score1 + score2 + score3) / 3;

    // Display final result
    cout << "Your test score average is: " << scoreAvg << '\n';

    return 0;
}