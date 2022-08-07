#include <iostream>

using namespace std;

// prototype
int faktorial(int n);

int main()
{
    int angka, hasil;

    cout << "masukkan nila faktorial : " << endl;
    cin >> angka;

    hasil = faktorial(angka);

    cout << hasil << endl;
}

int faktorial(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return n * faktorial(n - 1);
    }
}

# fibonnnaci lebih bagus pakai iterasi