#include <iostream>
#include <string>

using namespace std;

int main()
{
    // nilai string
    string kalimat1 = "cindy sangat suka berolahraga";
    string kalimat2 = "vicky hoby bermain badminton";

    // mencetak string
    cout << kalimat1 << endl;
    cout << kalimat2 << endl;

    // mencari substring => mengambil nilai di tengah-tengah
    // substr(index, panjang)
    cout << kalimat1.substr(6, 6) << endl;
    cout << kalimat2.substr(6,4) << endl;

    // mencari posisi dari substring
    cout << kalimat1.find("suka") << endl;
    cout << kalimat2.find("badminton") << endl;
    // mencari posisi dari belakang
    cout << kalimat1.rfind("suka") << endl;
}