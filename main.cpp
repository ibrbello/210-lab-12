// COMSC 210 | Lab 12 | Ibrahim Bello
// This program reads in a file of a month's sales from a lemonade stand
// into a C++ STD array, and performs a variety of operations.

#include <fstream>
#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>
#include <string>
using namespace std;

const int SIZE = 30;

int main() {
    array<double, SIZE> sales;
    ifstream fin;
    fin.open("sales.txt");
    if (fin.good()) {
        for ( size_t i = 0; i < sales.size(); i++) {
            fin >> sales[i];
            cout << sales[i] << endl;
        }
        fin.close();
    }
    else   
        cout << "File not found. \n";
}