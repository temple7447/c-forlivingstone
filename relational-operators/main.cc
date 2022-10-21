#include <iostream>

using namespace std;

int main(){
    int a =10,b = 2;
    int c= 20 ,d =10,e =2 ;

    /* the relation operators contain the following ==,!=, > , < , >=, <= */
    if(a == b)
    cout << "the value of a is equal to b "<< endl;
    else
    cout << "the value of a is not equal to b" << endl;
    if(b != c)
    cout << "the value of b is not equal to c " << endl;
    else 
    cout << "the value of b is equal to c " << endl;
    if(c > d)
    cout << "the value of c is greater than d" << endl;
    else
    cout <<  "the value of c is not greater than d " << endl;
    if(d < e)
    cout << "the value of d is less than e " << endl;
    else
    cout << "the value of d is less than e " << endl;
    if(a >= d)
    cout << "the value of a is greater than or equal to d" << endl;
    else
    cout <<  "the value of a is not greater than or equal to d " << endl;
    if(c <= e)
    cout << "the value of c is less than or equal to e " << endl;
    else
    cout << "the value of c is less than or equal to e " << endl;


  

    return 0;
   
}