// This program uses a type cast to avoid integer division.
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int books, months; // Number of books to read / Number of months spent reading
    double perMonth; // Average number of books per month

    cout << "How many books do you plan to read? ";
    cin >> books;

    cout << "How many months will it take you to read them? ";
    cin >> months;

    // Calculate books per month
    perMonth = books / static_cast<double>(months);

    cout << setprecision(3);
    cout << "\nThat's " << perMonth << " books per month\n";

    return 0;
}