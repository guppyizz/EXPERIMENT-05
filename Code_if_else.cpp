//UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 05

#include <iostream>
using namespace std;

int main() 
    // 2) Using if-else and without logical operators, find largest of 3 numbers
    int a, b, c, greatest;
    cout << "\nEnter three numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            greatest = a;
        } else {
            greatest = c;
        }
    } else {
        if (b > c) {
            greatest = b;
        } else {
            greatest = c;
        }
    }
    cout << "The greatest number is: " << greatest << endl << endl;
    
   
