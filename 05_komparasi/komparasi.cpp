# include <iostream>

using namespace std;

int main()
{
    int a = 8;
    int b = 8;

    bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

    // sama dengan
    hasil1 = (a == b);
    // tidak sama dengan
    hasil2 = (a != b);
    // kurang dari
    hasil3 = (a < b);
    // lebih dari
    hasil4 = (a > b);
    // kurang dari sama dengan
    hasil5 = (a <= b);
    // lebih dari sama dengan
    hasil6 = (a >= b);

    cout << hasil1 << endl;
    cout << hasil2 << endl;
    cout << hasil3 << endl;
    cout << hasil4 << endl;
    cout << hasil5 << endl; 
    cout << hasil6 << endl;

    cin.get();
    return 0;

}