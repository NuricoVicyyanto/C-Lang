#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat1 = "memancing dipagi hari";
    string kalimat2 = "ayo serang uraaaa!!!";
    cout << "== string ==" << endl;
    cout << kalimat1 << endl;
    cout << kalimat2 << endl
         << endl;

    // swap string
    cout << "== swap string ==" << endl;
    kalimat1.swap(kalimat2);
    cout << kalimat1 << endl;
    cout << kalimat2 << endl
         << endl;

    // replace string
    cout << "== replace string ==" << endl;
    kalimat2.replace(12, 4, "siang");
    cout << kalimat2 << endl;
    kalimat1.replace(kalimat1.find("ayo"), 3, "kuy");
    cout << kalimat1 << endl;

    // insert string
    cout << "== insert string ==" << endl;
    kalimat2.insert(10, "ikan ");
    cout << kalimat2 << endl;
}