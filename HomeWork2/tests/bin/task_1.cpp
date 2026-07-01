#include <iostream>
#include <random>
#include <limits>
#include <stdlib.h>

using namespace std;

int main()

#warning "The number should be an integer and between 0 to 100"

{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);
    int random_val = dist(rd);

    string guessed_val;
    cout << "Please guess a real number between 1 and 100: ";
    getline(cin, guessed_val);

    if (guessed_val.empty())
    {
        cerr << "Error encountered, exiting..." << endl;
        cout << random_val << endl;
        exit(EXIT_FAILURE);
    }

    int guessed_val_int = stoi(guessed_val);

    if (0 > guessed_val_int || guessed_val_int > 100)
    {
        cerr << "[WARNING] : Number must be between 0 and 99";
        exit(EXIT_FAILURE);
    }

    if (guessed_val_int == random_val)
    {
        cout << "You win!" << endl;
        exit(EXIT_SUCCESS);
    }

    return 0;
}
