#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> arrNilai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int nilai : arrNilai)
    {
        cout << "address : " << &nilai << " nilainya : " << nilai << endl;
    }

    cout << endl;

    // mengubah nilai array looping menggunakan reference
    for (int &nilai : arrNilai)
    {
        nilai += 2;
    }

    cout << endl;
    for (int nilai : arrNilai)
    {
        cout << "address : " << &nilai << " nilainya : " << nilai << endl;
    }
}