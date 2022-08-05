#include <iostream>

using namespace std;

// variabel global => dapat di panggil pada semua fungsi
int n = 8;

int var_global()
{
    return n;
}

int main()
{
    cout << "1. variabel global : " << n << endl;

    // variabel local
    // variabel local hanya dapat di panggil dari dalam fungsi
    int n = 10;
    cout << "2. variabel local : " << n << endl;
    {
        // variabel block => hanya dapat dipanggil di dalam block
        int n = 7;
    }
    // variabel block tidak dapat di panggil
    cout << "3. variabel block test :" << n << endl;

    // mengambil variabel global dengan fungsi
    cout << "4. variabel global fungsi :" << var_global() << endl;
}