#include <iostream>

using namespace std;

// default argument => memberi nilai default pada variabel untuk menghindari nilai kosong
double vol_kubus(double a, double b, double c = 2); // ini juga prototype

int main()
{
    cout << "volume kubus adalah : " << vol_kubus(2, 3, 5) << endl;
    cout << "volume kubus adalah : " << vol_kubus(2, 3) << endl;
}

double vol_kubus(double a, double b, double c)
{
    return a * b * c;
}