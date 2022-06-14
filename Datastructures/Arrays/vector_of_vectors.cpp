#include<bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> &arr)
{
    vector<vector<int>> a;
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> arr;
    int value;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    value=hourglassSum(arr);
    cout<<value<<"\n";

        return 0;
}