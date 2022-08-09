#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void print(std::array<int, arraySize> &nilai)
{
    std::cout << "array: ";
    for (int &a : nilai)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void print(std::array<char, arraySize> &nilai)
{
    std::cout << "array: ";
    for (char &a : nilai)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array <int, arraySize> angka = {3, 2, 1, 0, 9, 7, 8, 6, 5, 4};
    std::array <char, arraySize> huruf = {'q', 'w', 'f', 't', 'h', 'a', 'z', 'l', 'x', 'u'};

    print(angka);
    print(huruf);

    std::cout << std::endl;

    std::sort(angka.begin(), angka.end());
    print(angka);
    std::sort(huruf.begin(), huruf.end());
    print(huruf);
}