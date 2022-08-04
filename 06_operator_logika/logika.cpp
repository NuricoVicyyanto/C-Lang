#include <iostream>

using namespace std;

int main()
{
    int a = 8;
    int b = 9;

    bool hasil;

    cout << "Hasil operator not" << endl;
    hasil = !(a == 8);
    cout << hasil << endl;

    cout << "Hasil operator and" << endl;
    hasil = (a == 8) and (b == 9); // true and true
    cout << hasil << endl;
    hasil = (a == 8) and (b == 7); // true and false
    cout << hasil << endl;
    hasil = (a == 6) and (b == 9); // false and true
    cout << hasil << endl;
    hasil = (a == 6) and (b == 7); // false and false
    cout << hasil << endl;

    cout << "=============" << endl;
    cout << "Hasil operator or" << endl;

    hasil = (a == 8) or (b == 9); // true and true
    cout << hasil << endl;
    hasil = (a == 8) or (b == 7); // true and false
    cout << hasil << endl;
    hasil = (a == 6) or (b == 9); // false and true
    cout << hasil << endl;
    hasil = (a == 6) or (b == 7); // false and false
    cout << hasil << endl;


}