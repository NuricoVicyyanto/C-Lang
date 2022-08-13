#include <iostream>
#include <string>

using namespace std;

struct hero
{
    string nama;
    int level;
};

struct game
{
    string namaGame;
    string genre;
    int rating;

    // struct hero daftarkan
    hero pasukan1;
};

int main()
{
    hero hero1, hero2;
    game game1;

    // hero 1
    hero1.nama = "hog rider";
    hero1.level = 11;

    // hero 2
    hero2.nama = "barbarian";
    hero2.level = 11;

    // game
    game1.namaGame = "clash royale";
    game1.genre = "strategy";
    game1.rating = 5;
    game1.pasukan1 = hero1; // ambil dari yang definisi hero yang diatas

    // cetak
    cout << game1.namaGame << endl;
    cout << game1.genre << endl;
    cout << game1.rating << endl;
    cout << game1.pasukan1.nama << endl;  // cara memanggil nesting struct
    cout << game1.pasukan1.level << endl; // cara memanggil nesting struct
}