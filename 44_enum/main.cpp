#include <iostream>

using namespace std;


enum warna {hitam, putih, kuning, biru};

int main()
{
    warna kain;

    kain = putih;

    if(kain == putih){
        cout << "warna kain adalah putih" << endl;
    }

}