#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat;
    int count = 0;

    getline(cin, kalimat);
    count = kalimat.find(" ", count+1);
    cout << count << endl;
}