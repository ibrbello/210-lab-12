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
            // Check that file was read correctly
            cout << sales[i] << " "; 
        }
        fin.close();
    }
    else   
        cout << "File not found. \n";
    cout << endl;
    // Operations: find max, min, sum, find, sort
    // Max, min, & sum
    cout << "1. Max: " << *max_element(sales.begin(), sales.end()) << endl;
    cout << "2. Min: " << *min_element(sales.begin(), sales.end()) << endl;
    cout << "3. Sum: " << accumulate(sales.begin(), sales.end(), 0) << endl;

    // find
    double target = 3.4;   // search target
    array<double, SIZE>::iterator it;  // declare iterator to point to the found element
    it = find(sales.begin(), sales.end(), target);
    cout << "4. Value " << target;
    if (it != sales.end())
        cout << " found in position " << it - sales.begin() << endl;
    else
        cout << " was not found.\n";
    cout << "    Value: " << *it << endl;

    // Sort
    sort(sales.begin(), sales.end());
    cout << "5.  Sorted: ";
    for (double val : sales) cout << val << " "; cout << endl;
    return 0;


}