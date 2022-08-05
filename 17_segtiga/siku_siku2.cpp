#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "masukkan nilai pola : " << endl;
    cin >> n;

    cout << "Pola ke 1" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++){
            cout << " ";
        }
        for (int k = n; k >= i; k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola ke 2" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
}