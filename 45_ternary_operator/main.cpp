#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;

    string hasil1, hasil2, output;


    hasil1 = "benar";
    hasil2 = "salah";

    a = 8;
    b = 9;

    output = (a < b) ? hasil1 : hasil2;

    cout << output << endl;
}