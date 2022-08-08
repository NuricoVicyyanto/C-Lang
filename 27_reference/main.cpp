#include <iostream>

using namespace std;

int main()
{
    // variabel
    int a = 8;

    cout << "nilai dari variabel a adalah : " << a << endl;
    cout << "alamat dari variabel a adalah : " << &a << endl;

    // reference
    int &b = a;
    cout << "nilai dari variabel b adalah : " << b << endl;
    cout << "alamat dari variabel b adalah : " << &b << endl;
    /* reference berfungsi untuk menyimpan satu variabel pada alamat memori yang
     sama apabila salah satu dirubah maka yang lainnya akan ikut berubah */

    cin.get();
    return 0;
}