#include <iostream>

using namespace std;

// basic function
int hitung_luas(int panjang, int lebar)
{
    int luas = panjang * lebar;
    return luas;
}

// overload fuction menimpa fungsi diatas
int hitung_luas(int panjang)
{
    int luas = panjang * panjang;
    return luas;
}

// overload juga
double hitung_luas(double panjang)
{
    double luas = panjang * panjang;
    return luas;
}

int main()
{
    cout << "luas persegi panjang adalah : " << hitung_luas(3, 4) << endl;
    cout << "luas persegi adalah : " << hitung_luas(5) << endl;
    cout << "luas persegi doubke adalah : " << hitung_luas(3.5) << endl;
    cin.get();
    return 0;
}

/*fungsi overloading adalah untu menimpa fungsi yang lain , yg memiliki nama
yang sama, fungsi ini akan otomatis dipanggil sesuai kebutuhan dari data yang
diperlukan sehingga tida perlu diinisiasi ulang secara spesifik*/