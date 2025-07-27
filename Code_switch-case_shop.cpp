//UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 05

#include <iostream>
using namespace std;

int main() {

    // 5) Using Switch-case write a program.
    int choice;
    cout << "choose any one of them : ";
    cout << "THE GYM SHOP!! CHOOSE ANY ONE TO GET MORE DETAILS ABOUT IT " << endl;
    cout << "1. The cloths : " << endl;
    cout << "2. The Protine : " << endl;
    cout << "3. The Weights : " << endl;
    cout << "4. The suppliments : " << endl;
    cin >> choice;
    
    switch (choice){
        case 1:
        cout << "YOU HAVE CHOOSEN CLOTHS : here are gym shoes, wrist ban, socks, tshirts, lower, etc";
        break;
        
        case 2:
        cout << "YOU HAVE CHOOSEN PROTINE : The protine is of $10, $20 and $50 of mango,orange and chocolate ";
        break;
        
        case 3:
        cout << "YOU HAVE CHOOSEN WEIGHTS : We have 2kgs, 5kgs, 10kgs, 20kgs and 30kgs of them";
        break;
        
        case 4:
        cout << "YOU HAVE CHOOSEN SUPPLIMENT : we have tren, anabol , canabol, streoids";
        break;
        
    }
}
