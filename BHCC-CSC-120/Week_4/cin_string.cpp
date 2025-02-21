// This program illustrates a problem that can occur if
// cin is used to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main() {
  string name, city;

  // cin reads the input until it encoutners a whitespace
  // which means it will not read the entire line if the input contains spaces.
  // To avoid this issue you should use getline instead of cin
  cout << "Please enter your full name: ";
  //  cin >> name;
  getline(cin, name);
  cout << "Enter the city you live in: ";
  //  cin >> city;
  getline(cin, city);

  cout << "Hello, " << name << endl;
  cout << "You live in " << city << endl;

  return 0;
}