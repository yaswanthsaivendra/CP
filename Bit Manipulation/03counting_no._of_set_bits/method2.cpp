// counting no. of set bits.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; // number
    cin >> n;
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = n & (n-1);    //for every iteration, the right most bit will be elminated.
    }
    cout << cnt;

    return 0;
}