
// 203_FungsiSwitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputData() {
    cout << "masukan bilangan pertama=";
    cin >> bilangan1;
    cout << "masukan bilangan kedua=";
    cin >> bilangan2;
}

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b; 
}

float pembagian(int a, int b)
{
    return a / b; 
}


int main()
{
    std::cout << "Hello World!\n";
}

