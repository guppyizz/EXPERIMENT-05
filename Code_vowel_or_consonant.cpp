//UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 05

#include <iostream>
using namespace std;

int main() {

    // 3) Using if-else Determine whether the given character is a vowel or a consonant
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        ch = ch + ('a' - 'A');

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a vowel." << endl << endl;
    else
        cout << ch << " is a consonant." << endl << endl;

   
