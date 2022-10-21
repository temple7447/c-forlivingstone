#include <iostream>

using namespace std;

int main(){
    int a =24,b = 43;

    /* the bitwise operators contain the following &, |, ^, ~ , <<, >> */

    cout << "a & b   " << (a & b ) << endl;
    cout << "a | b   " << (a | b ) << endl;
    cout << "a ^ b  " << (a ^ b ) << endl;
    cout << "~a " << ( ~a ) << endl;
    cout << "a << 2   " << (a << 2 ) << endl;
    cout << "b << 2   " << (b << 2 ) << endl;
    cout << "b >> 2   " << (b >> 2 ) << endl;
    cout << "a >> 2   " << (a >> 2 ) << endl;
    

    return 0;
   
}