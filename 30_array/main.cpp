#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    cout << "alamat array : " << &arr[0] << " nilainya adalah : " << arr[0] << endl;
    cout << "alamat array : " << &arr[1] << " nilainya adalah : " << arr[1] << endl;
    cout << "alamat array : " << &arr[2] << " nilainya adalah : " << arr[2] << endl;
    cout << "alamat array : " << &arr[3] << " nilainya adalah : " << arr[3] << endl;
    cout << "alamat array : " << &arr[4] << " nilainya adalah : " << arr[4] << endl;

    // merubah nilai array
    int *ptr = arr;
    *(ptr + 2) = 6;

    // merubah nilai array
    arr[3] = 8;

    cout << endl;
    cout << "alamat array : " << &arr[0] << " nilainya adalah : " << arr[0] << endl;
    cout << "alamat array : " << &arr[1] << " nilainya adalah : " << arr[1] << endl;
    cout << "alamat array : " << &arr[2] << " nilainya adalah : " << arr[2] << endl;
    cout << "alamat array : " << &arr[3] << " nilainya adalah : " << arr[3] << endl;
    cout << "alamat array : " << &arr[4] << " nilainya adalah : " << arr[4] << endl;

    // menghitung jumlah data yg ada pada array
    cout << endl;
    cout << "ukuran array : " << sizeof(arr) << endl;
    cout << "jumlah anggota array adalah : " << sizeof(arr)/sizeof(int) << endl; 

}