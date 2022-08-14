#include<bits/stdc++.h>
#define N 100


using namespace std;


int arr[N], top=-1;

void push(int num) {
    if(top>=N-1) cout<<"stack overflow"<<"\n";
    else {
        top++;
        arr[top] = num;
    }
}

void pop() {
    if(top==-1) cout<<"stack underflow"<<"\n";
    else {
        int num = arr[top];
        top--;
        cout<<"poped element is "<<num<<"\n";
    }
}

void display() {
    if(top == -1) cout<<"stack is empty"<<"\n";
    else {
        cout<<"stack elements: "<<"\n";
        for (int i = top; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";  
    }
    
}

int main(){
    int opt;
    do {
        cout << "Enter the option: ";
        cin >> opt;
        switch (opt) {
            case 1:
                int num;
                cout<<"Enter the element you want to push on to the stack: ";
                cin >> num;
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"exit"<<"\n";
                break;
            default:
                cout<<"Invalid choice"<<"\n";
                break;
        }
    }while (opt!=4);

    return 0;
}