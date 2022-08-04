#include <iostream>

using namespace std;

int main()
{

    cout << "awal for loop 1" << endl;
    for (int counter = 1; counter <= 10; counter++)
    {
        cout << counter << endl;
    }

    cout << "akhir for loop 1" << endl;

    cout << "awal for loop 2" << endl;
    for (int counter = 1; counter <= 10; counter += 2)
    {
        cout << counter << endl;
    }

    cout << "akhir for loop 2" << endl;

    cout << "awal for loop 3" << endl;
    for (int counter = 1; counter >= -10; counter--)
    {
        cout << counter << endl;
    }

    cout << "akhir for loop 3" << endl;

    cout << "awal for loop 4" << endl;
    int total = 0;
    for (int counter = 1; counter <= 10; counter++)
    {
        total += counter;
        cout << counter << "||" << total << endl;
    }

    cout << "akhir for loop 4" << endl;

    cin.get();
    return 0;
}