//Write a program to find the sum of all numbers from 1 to N using a loop.
#include <iostream>
using namespace std;

int main(){
    int a;  
    int P;  

    cout <<"Enter a value of P = ";
    cin>>P;

    int z = 0; // Initialize a variable 'z' to store the sum of int.
    for (int a= 1; a <= P; ++a)   // Calculate the sum of int from 1 to 'P'.
    {
        z += a; //Add 'a' to 'z'.
        if (a == P) {
            cout << a << " = ";  // Print 'a' follow by "=" if it's the last number.
        }
        else {
            cout << a << " + ";  // Print 'a' follow by "+" if it's not the last number.
        }
    }
    cout << z;

    return 0;
}
