#include<iostream>

using namespace std;
/* 
    playing cards
*/
struct card{
    int face;
    int shape;
    int color;
};

int main(){
    struct card deck[52];   //an array of 52 cards where each card is a structure.
    deck[0].face=1;
    deck[0].shape=0;
    deck[0].color=1;
    cout<<deck[0].face;
    
    
    return 0;
}