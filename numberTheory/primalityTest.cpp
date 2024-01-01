#include<iostream>


using namespace std;


// naive approach - O(n)
bool isPrimeNaive(int n) {
    if(n == 1) return false;

    for(int i=2; i<n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

"""
    In above naive approach, we are running the loop till N
    we can express the divisors of a number as pairs, for example:
        12
            - 1 * 12
            - 2 * 6
            - 3 * 4
            - 4 * 3 
            - 6 * 2
            - 12 * 1

            conclusions from above:
                - the pairs are exactly reverse of numbers after a certain limit
                - now the limit is actually sqrt(N)
                - for every pair, one of the num is <= sqrt(N) and the other is >= sqrt(N)

            we can use the above conclusion to run the loop only until sqrt(N)
            and if one of the number in divisor pair is not a factor and the other one obvisiouly isn't a factor

"""

// best approach - O(sqrt(N))
bool isPrime(int n) {
    if(n == 1) return false;

    for(int i=2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}


int main() {
    int num = 11;

    if(isPrimeNaive(num)) cout<<"true";
    else cout<<"false";
    cout<<"\n";
    

    if(isPrime(num)) cout<<"true";
    else cout<<"false";

    return 0;
}