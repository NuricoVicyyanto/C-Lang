#include <iostream>

using namespace std;

int pangkat(int y)
{
    int x;
    x = y * y;
    return x;
}

int main()
{
    int n;
    cout << "masukkan nilai :";
    cin >> n;

    cout << "hasil pangkat adalah : " << pangkat(n) << endl;

    cin.get();
    return 0;
}