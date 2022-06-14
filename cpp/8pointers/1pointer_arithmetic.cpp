#include<iostream>

using namespace std;


int main(){
    int arr[5]{2,4,6,8,10};
    int *p=arr;

    for (int i = 0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << i[arr] << endl;
    }
    cout << "\n\n";

   

    for (int i = 0; i < 5; i++)
    {
        cout << *p << endl;
        p++;                    //pointer arithmetic
    }
    cout << "\n\n";

    p=arr;
    
    for (int i = 0; i<5; i++)
    {
        cout<<*(p+i)<<endl;
    }
    cout<<"\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }
    cout << "\n\n";


    for (int i = 0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<"\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << i[p] << endl;
    }
    cout << "\n\n";

    return 0;
}