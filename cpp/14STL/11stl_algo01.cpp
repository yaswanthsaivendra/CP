#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout<< min <<"\n";
    int max = *max_element(v.begin(), v.end());
    cout << max << "\n";
    int sum = accumulate(v.begin(), v.end(), 0); //third argument is initial value of sum.
    cout << sum << "\n";
    int ct = count(v.begin(), v.end(), 3); //third arugment is the element which we have to count.
    cout << ct << "\n";
    auto it = find(v.begin(), v.end(), 3); //third argument is the element to find.
    if(it != v.end())
        cout<< *it <<"\n";
    else cout<<"Element not found";  

    // reverse can used on strings, arrays and vectors.
    reverse(v.begin(), v.end());
    for(auto val:v){
        cout << val<< " ";
    }
    return 0;
}