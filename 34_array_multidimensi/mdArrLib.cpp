#include <iostream>
#include <array>

using namespace std;

const int kolom = 3;
const int baris = 2;

void printArr(array<array<int, kolom>, baris> nilaiArr)
{
    for (array<int, kolom> vecBar : nilaiArr)
    {
        for (int nilaiKol : vecBar)
        {
            cout << nilaiKol << " ";
        }
        cout << endl;
    }
}

int main()
{

    array<array<int, kolom>, baris> nilaiMd = {0, 1, 2, 3, 4, 5};

    printArr(nilaiMd);
}