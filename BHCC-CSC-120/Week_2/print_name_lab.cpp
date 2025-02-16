// How to print a banner centered in monitor - using the WYSIWYG approach
// how to customize the cmp window - using the system function
// how to print my name in between double quotes
// how to hold the screen for the user to see the result
// Print My Name
// Programmer: Percival de Freitas Villalva
// Last Modified: Feb 7th 2025

#include <iostream>
using namespace std;

int main() {
	// Set up section
	system("color B0");
	system("title .        Print My Name     by Percival Villalva");

	// Banner section
	cout << "\n"
		<< "\t\t This lab prints my name on the monitor \n"
		<< "\t\t          within double quotes          \n"
		<< "\t\t                Lab #1                  \n"
		<< "\t\t          by Percival Villalva        \n\n";

	// Output section
	cout << "\n\"Percival\"\n\n";

	system("pause");
	return 0;
}