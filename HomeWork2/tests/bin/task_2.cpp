#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(const int argc, char* argv[])
{
    if (argc != 3)
    {
        cout << argc << endl;
        cerr << "Error: Wrong number of arguments" << endl;
        exit(EXIT_FAILURE);
    }

    int val1 = 0;
    string back1;

    int val2 = 0;
    string back2;

    stringstream filename1{argv[1]};
    stringstream filename2{argv[2]};

    filename1 >> val1 >> back1;
    filename2 >> val2 >> back2;

    if (back1 == ".txt" && back2 == ".txt")
    {
        float ans = (float)(val1 + val2) / 2;
        cout << ans << endl;
    }

    else if (back1 == ".png" && back2 == ".png")
    {
        auto ans = (float)(val1 + val2);
        cout << ans << endl;
    }

    else if (back1 == ".txt" && back2 == ".png")
    {
        auto ans = (float)(val1 % val2);
        cout << ans << endl;
    }

    else
    {
        cout << back1 << endl;
        cout << back2 << endl;
        cerr << "Error: Wrong type of arguments" << endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}