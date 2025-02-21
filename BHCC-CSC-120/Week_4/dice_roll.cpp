// This program simulates rolling dice.
#include <iostream>
#include <random>
using namespace std;

int main () {
    // Constants
    const int MIN = 1;
    const int MAX = 6;

    // Random number engine
    random_device engine;

    // Distribution object
    uniform_int_distribution<int> diceValue(MIN, MAX);

    cout << "Rolling dice...\n"
         << diceValue(engine)
         << '\n'
         << diceValue(engine);

    return 0;
}
