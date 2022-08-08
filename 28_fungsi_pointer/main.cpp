#include <iostream>

using namespace std;

void fungsi(int *b) // tanda * digunkan untuk mengambil nilai dari pointer
{
    cout << "alamat b adalah : " << b << endl;
    cout << "nilai b adalah : " << *b << endl;
}

void kuadrat(int *n) // tanda * digunkan untuk mengambil nilai dari pointer
{
    *n = (*n) * (*n);
}

int main()
{
    int a = 8;

    cout << "alamat a adalah : " << &a << endl;
    cout << "nilai a adalah : " << a << endl;

    fungsi(&a);

    kuadrat(&a);
    cout << "nilai kuadrat adalah : " << a << endl;
}

// tanda & digunakan untuk menandai pointer dengan memetakan alamatnya di memory