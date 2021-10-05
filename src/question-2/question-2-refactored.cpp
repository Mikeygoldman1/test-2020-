// C++ program to print Pascal's triangle

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int fact(int n) { return n > 1 ? fact(n - 1) * n : 1; }

void leadSpaces(const int r, const int r_max, const int value)
{
    for(int i = r; i <= r_max; i++)
        cout << "  ";
}
void binomialCoef(const int r,int &value)
{
    for(int i = 0; i <= r; i++) {
        value = fact(r)/(fact(i)*fact(r-i));
        cout << "  " << value;
    }
}

int main() {
    auto r=0, r_max=0, i=0, value=0;

    cout << "Enter the number of rows of Pascal's Triangle\n";
    cin >> r_max;

    for(r = 0; r < r_max; r++) {
    // Print leading spaces
    leadSpaces(r,r_max,value);
    
    binomialCoef(r,value);
    
    cout << endl;
    }

    return 0;
}
