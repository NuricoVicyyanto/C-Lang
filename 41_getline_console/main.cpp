#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat;

    cout << "masukkan kalimat :" << endl;
    /*cin << kalimat hanya dapat menampung satu huruf inputan daripada getline
    string yang dapat menampung banyak inputan */
    getline(cin, kalimat);
    cout << "input anda adalah : " << kalimat << endl;

    int spasi = 0;
    int jumlah = 0;

    while (true)
    {
        spasi = kalimat.find(" ", spasi + 1);
        jumlah++;
        if (spasi < 0)
        {
            break;
        }
    }
    cout << "jumlah kata : " << jumlah << endl;
}