#include <iostream>

using namespace std;

// fungsi dengan kembalian : return => mengembalika nilai
// reporter
int pangkat(int y)
{
    int x;
    x = y * y;
    return x;
}

// fungsi void tanpa return => tidak mengembalikan nilai
// worker
void cetak(int text)
{
    cout << text << endl;
}

int main()
{
    int n;
    cout << "masukkan nilai :";
    cin >> n;

    cout << "hasil pangkat adalah : ";
    cetak(pangkat(n)); // dipanggil dari fungsi void dan return

    cin.get();
    return 0;
}