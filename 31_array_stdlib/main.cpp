#include <iostream>

// standart library array
#include <array>

using namespace std;

int main()
{
    // membuat array dengan menggunajan standart library
    // penulisan pemangglan array standart library
    // array < int, jumlah array > nama array;

    array<int, 5> nilai;

    for (int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        cout << "nilai array " << nilai[i] << " address memory " << &nilai[i] << endl;
    }

    cout << endl;

    // hitung ukuran array
    cout << "Ukuran : " << nilai.size() << endl;
    // mencari nilai awal array
    cout << "Nilai awal array : " << nilai.begin() << endl;
    // mencari nilai akhir array
    cout << "Nilai awal array : " << nilai.end() << endl;
    // mencari nilai dengan address
    cout << "nilai yg dicari : " << nilai.at(1) << endl;
}