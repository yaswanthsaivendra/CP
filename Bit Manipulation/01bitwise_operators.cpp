#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //Bitwise Operators
    cout<<(5 & 2)<<"\n";  //Bitwise AND &
    cout << (5 | 2) << "\n"; // Bitwise OR |
    cout<<(~5)<<"\n";  //Bitwise NOT ~     - its a unary operator.

    // left shift operator.
    cout<<(5<<1)<<"\n";   
    //5<<n      left shifting the number 5 by n bit(s).
    //the number in decimal will be multiplied by 2 power n times.

    // right shift operator.
    cout << (5 >> 1) << "\n"; 
    // 5>>n      right shifting the number 5 by n bit(s).
    // the number in decimal will be divided by 2 power n times.
    return 0;
}