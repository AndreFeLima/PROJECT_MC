#include "functions.h"
#include <iostream>
using namespace std;

int main () {
    int A, B;
    char C ='D';
    cin >> A >> B;
    if (B==0) {
        while (B=0) { 
        cout << "ERRO"; 
        cin >> B;
    }
        
    } 

    cout << "QUOCIENTE" << endl; 
    cout << division_mod(A, B, C) << endl;
    cout << "RESTO" << endl;
    C = 'M';
    cout << division_mod(A, B, C);
    return 0;
}
