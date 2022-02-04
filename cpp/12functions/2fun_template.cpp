#include<iostream>

using namespace std;

template<class T>
T maxim(T a, T b){
    return a>b?a:b;
}

int main()
{
    cout << maxim(5, 7) << "\n";
    cout<<maxim(5.4,7.4)<<"\n";
    cout << maxim(5.2f, 7.4f) << "\n";
    return 0;
}