#include <iostream>
#include <string>

using namespace std;

/*  struct adalah tipe data bentukan yang terdiri dari kumpulan tipe data lain.
 Struct mirip seperti array, tapi struct bisa menampung lebih dari 1 jenis tipe
 data */
struct makanan
{
    string nama;
    float ukuran;
    int harga;
    string rasa;
};

int main()
{
    // didefinisikan dari nama struct
    makanan roti;

    // format penulisan namaValue.isinyaStruct
    roti.nama = "sari roti";
    roti.ukuran = 500;
    roti.harga = 5000;
    roti.rasa = "coklat";

    cout << roti.nama << endl;
    cout << roti.ukuran << endl;
    cout << roti.harga << endl;
    cout << roti.rasa << endl;
}