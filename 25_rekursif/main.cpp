#include <iostream>

using namespace std;

int pangkat_iterasi(int a, int b)
{
    int hasil = a;
    for (int i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

int pangkat_rekursif(int a, int b)
{
    if (b <= 1)
    {
        return a;
    }
    else
    {
        return a * pangkat_rekursif(a, (b - 1));
    }
}

int main()
{
    cout << "hasil pangkat iterasi adalah : " << pangkat_iterasi(3, 2) << endl;
    cout << "hasil pangkat iterasi adalah : " << pangkat_rekursif(4, 2) << endl;
}