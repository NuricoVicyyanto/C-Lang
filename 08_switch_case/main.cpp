#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan angka :";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "nilai sama dengan 1" << endl;
        break;
    case 2:
        cout << "nilai sama dengan 2" << endl;
    case 3:
        cout << "nilai sama dengan 3" << endl;
    case 4:
        cout << "nilai sama dengan 4" << endl;
    case 5:
        cout << "nilai sama dengan 5" << endl;
    default:
        cout << "unknown" << endl;
    }
}