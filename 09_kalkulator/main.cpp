#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "selamat datang di program kalkulator" << endl;

    cout << "masukkan nilai pertama :";
    cin >> a;
    cout << "pilih operator aritmatika :";
    cin >> aritmatika;
    cout << "pilih nilai kedua :";
    cin >> b;

    cout << "\n hasil perhitungan ";
    cout << a << aritmatika << b << " = ";

    if (aritmatika == '+')
    {
        hasil = a + b;
    }
    else if(aritmatika == '-')
    {
        hasil = a - b;
    }
    else if (aritmatika == '*')
    {
        hasil = a * b;
    }
    else if (aritmatika == '/')
    {
        hasil = a / b;
    }
    else
    {
        cout << "operator tidak diketahui" << endl;
    }

    cout << hasil << endl;
}