#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kata = "cat";
    // menampilkan karakter
    cout << kata << endl;

    // menampilkan karakter berdasarkan index
    cout << kata[0];
    cout << kata[1];
    cout << kata[2] << endl;

    // merubah karakter
    kata[1] = 'e'; // karakter yg diubah didefinisikan menggunakan tanda kutip satu
    cout << kata << endl;

    // menambah karakter pada string
    string kata2 = (kata + "ar");
    cout << kata2 << endl;

    string kata3 = "membahana";
    kata2.append(" "+ kata3);
    cout << kata2 << endl;

    string kata4 = " badai !!!!!!";
    kata2 += kata4; 
    cout << kata2 << endl;
}