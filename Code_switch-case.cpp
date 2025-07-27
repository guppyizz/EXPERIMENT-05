//UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 05

#include <iostream>
using namespace std;

int main() {
  
    // 4) Using Switch-case write a program for calculator
    float num1,num2;
    char op;
    cout << "First number is : ";
    cin >> num1;
    cout << "Second number is : ";
    cin >> num2;
    cout << "Enter valid operation : ";
    cin >> op;
    switch (op){
        case '+':
        cout << "The sum is :" << num1+num2 << endl << endl;
        break;
        
        case '-':
        cout << "The sub is :" << num1-num2 << endl << endl;
        break;
        
        case '/':
        cout << "The division is :" << num1/num2 << endl << endl;
        break;
        
        case '*':
        cout << "The multipication is :" << num1*num2 << endl << endl;
        break;
        
        default:
        cout << "The input is invalid" << endl << endl;
    }
    
