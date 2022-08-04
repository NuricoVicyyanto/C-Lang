#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan angka :";
    cin >> a;

    if (a == 1)
    {
        cout << "nilai  sama dengan 1" << endl;
    }
    else if (a == 2){
        cout << "nilai  sama dengan 2" << endl;
    }
    else
    {
        cout << "nilai tidak dikenal" << endl;
    }

    cin.get();
    return 0;
}