#include<iostream>
using namespace std;

int main() {
    int A,H,B;
    cout << "Enter your age: " ;
    cin >> A;
    if ( A <= 25) { 
        cout << "Enter your height: " ;
        cin >> H;
        if (H < 100){
        cout << "Your character = Chopper";}
        else if (H < 180){
        cout << "Your character = Usopp";
        } else {
        cout << "Enter your bounty: ";
        cin >> B;
        if (B > 1100000000 ) {
        cout << "Your character = Zoro";
        } else {
        cout << "Your character = Sanji";}
            }
    } else if (A <= 60 ) {
        cout << "Enter your bounty: " ;
        cin >> B;
        if (B > 500000000) {
            cout << "Your character = Jinbe";
        } else {
            cout << "Your character = Franky";
        }
    } else {
        cout << "Your character = Brook";
    }
        
    
}