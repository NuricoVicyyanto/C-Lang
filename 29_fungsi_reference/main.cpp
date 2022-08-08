#include <iostream>

using namespace std;

// prototype
void kuadrat(int &);

int main()
{
    int a = 8;

    cout << "nilai a adalah : " << a << endl;
    cout << "alamat a adalah : " << &a << endl;

    kuadrat(a);
    cout << "nilai kuadrat dengan reference adalah : " << a << endl;
}

void kuadrat(int &nilai)
{
    nilai = nilai * nilai;
}

// reference lebih baik daripada pointer