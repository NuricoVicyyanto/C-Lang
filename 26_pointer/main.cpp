#include <iostream>

using namespace std;

int main()
{
    int a = 8;

    // pointer
    int *aPtr = nullptr; // tanda * digunkan untuk mengambil nilai dari pointer
    aPtr = &a;           // tanda & berfungsi untuk mencari alamat variabel pada memori

    cout << "nilai dari a : " << a << endl;
    cout << "pointer dari a : " << aPtr << endl;
    cout << "mengambil nilai dari pointer : " << *aPtr << endl;
    /* tanda * digunkan untuk menandai pointer dan memanggil data dengan
    menggunakan pointer alamat */
}