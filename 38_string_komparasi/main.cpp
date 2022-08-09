#include <iostream>
#include <string>

using namespace std;

int main()
{
    // komparasi kata dilakukan dengan menggunakan string

    while (true)
    {
        string inputan;
        string kata = "cindy";

        cout << "kata yang dicari : ";
        cin >> inputan;

        if (inputan == kata)
        {
            cout << "kata anda cari berhasil ditemukan !!!";
            break;
        }
        else
        {
            cout << "kata yang anda cari salah !!!" << endl;
        }
    }
}