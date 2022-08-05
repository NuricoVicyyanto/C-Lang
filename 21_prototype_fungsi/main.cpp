#include <iostream>

using namespace std;

// prototype
double luas_persegi(double x, double y);
/*berfungsi untuk memanggil fungsi baik yang dapat mengembalikan nilai => return
maupun void yang terletak dibawah fungsi main*/


int main()
{
    double a, b;
    cout << "menghitung luas persegi : ";
    cout << "masukkan nilai 1 : ";
    cin >> a;
    cout << "masukkan nilai 2 : ";
    cin >> b;

    cout << "luas persegi adalah : ";
    cout << luas_persegi(a, b);
}

double luas_persegi(double x, double y)
{
    return x * y;
}