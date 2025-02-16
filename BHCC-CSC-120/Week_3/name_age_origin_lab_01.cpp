// Program asks user for his full name, year of birth and city and prints the user's provided inputs along with his age.
//
// New Leraning Outcomes:
// 1 - use of strings
// 2 - proper naming rules and style of regular variables
// 3 - named constants - proper naming rules and proper use
// 4 - functions that work with the cin object and
// 5 - removing extra stuff from the keyboard buffer so the next input will start fresh
//
// Leaning Outcomes Reviewed
// 1 - structure of a program(which section goes where)
// 2 - proper formatting of the source code and output window
// 3 - escape sequences, including printing a double quote in a string
// 4 - the WYSIWYG approach for the banner and
// 5 - the system functions to customize the cmp window - color scheme and text of the title bar
// 6 - holding the screen so the user will see the final message - test your exe
//
// Name: Name, age and origin
// Programmer: Percival Villalva
// Last edited: 02/14/2025

// Preprocessor directives
#include <iostream>
using namespace std;

int main() {
    // System Configuration
	system("color E1");
    system("title strings, constant variables, escape sequences, cin functions and methods    by Percival Villalva");

    // Variables
    string name, city;

    // Banner
    cout << "\n"
        << "\t\t                Full name, year of birth and city                          \n"
        << "\t\t      not as easy as it looks - the devil is in the details                \n"
        << "\t\t             make sure you test EVERY possible input                       \n"
        << "\t\t           name and city can have 1, 2, 3 or more parts                    \n"
        << "\t\t    after the year born there could be other input in that line            \n"
        << "\t\t                     base year is set to 2023                              \n"
        << "\t\t make sure you follow all the learning outcomes of the previous lab        \n"
        << "\t\t                      by Percival Villalva                               \n\n";

    // User input section
    cout << "\nEnter your name: ";

    system("pause");
	return 0;
}

// Notes:
// This lab is divided into 2 weeks. The current code covers only the first part of the lab.
// The second part of the lab will be done in Week 4.