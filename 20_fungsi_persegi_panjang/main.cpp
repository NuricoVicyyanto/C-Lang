#include <iostream>

using namespace std;

double hitung_luas(double x, double y)
{
    double hitung = x * y;
    return hitung;
}

double hitung_keliling(double x, double y)
{
    double hitung = 2 * (x + y);
    return hitung;
}

int main()
{
    double a;
    double b;
    cout << "hitung luas dan keliling persegi panjang" << endl;
    cout << "masukkan nilai 1 :";
    cin >> a;
    cout << "masukkan nilai 2 :";
    cin >> b;

    cout << "luas persegi panjang adalah : ";
    cout << hitung_luas(a, b) << endl;
    cout << "keliling persegi panjang : ";
    cout << hitung_keliling(a, b) << endl;
}