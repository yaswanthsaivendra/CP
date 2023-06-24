// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<ll> vl;
// const int N = 1e5+10;

// //top down

// int dp[N][4];
// int a[N][4];

// int func(int i, int par) 
// {
    
//     if (i == 0) return 0;
//     if (dp[i][par] != -1) return dp[i][par];
//     // cout <<"i"<< i<<"par"<<par<<"\n";
//     int happy = INT_MIN;

//     if(par == 1) {
//         // cout<<"1"<<"\n";
//         happy = max(happy, func(i - 1, 2) + a[i][2]);
//         happy = max(happy, func(i - 1, 3) + a[i][3]);
//     }
//     else if(par == 2) {
//         // cout<<"2"<<"\n";
//         happy = max(happy, func(i - 1, 1) + a[i][1]);
//         happy = max(happy, func(i - 1, 3) + a[i][3]);
//     }
//     else if(par == 3) {
//         // cout<<"3"<<"\n";
//         happy = max(happy, func(i - 1, 1) + a[i][1]);
//         happy = max(happy, func(i - 1, 2) + a[i][2]);
//     }
//     return dp[i][par] = happy;
//     // return happy;

// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     memset(dp, -1, sizeof(dp));
//     int n;
//     cin >>n;
//     // cout<<n<<" "<<k;
//     for (int i = 1; i <= n; i++)
//     {
//          cin >> a[i][1]>>a[i][2]>>a[i][3];
//     }
//     int ans = INT_MIN;
//     ans = max(ans, a[n][1] + func(n-1, 1));
//     ans = max(ans, a[n][2] + func(n-1, 2));
//     ans = max(ans, a[n][3] + func(n-1, 3));
//     cout<<ans;

//     return 0;
// }



// bottom up approach

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
const int N = 1e5+10;


int dp[N][4];
int a[N][4];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >>n;
    // cout<<n<<" "<<k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i][1]>>a[i][2]>>a[i][3];
    }
    dp[1][1] = a[1][1];
    dp[1][2] = a[1][2];
    dp[1][3] = a[1][3];

    for(int i=2; i<=n; i++) {

        dp[i][1] = max(dp[i-1][2] , dp[i-1][3]) + a[i][1];
        dp[i][2] = max(dp[i-1][1] , dp[i-1][3]) + a[i][2];
        dp[i][3] = max(dp[i-1][1] , dp[i-1][2]) + a[i][3];
    }
    int ans;
    ans = max(dp[n][1], dp[n][2]);
    ans = max(ans, dp[n][3]);
    cout << ans;

    return 0;
}