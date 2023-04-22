#include <bits/stdc++.h>
using namespace std;

//Access Specifiers:
// public, private, protected

class Player 
{
public:
    string name;
    int number;

    Player(string _name="", int _number=0)
    {
        name = _name;
        number = _number;
    }

    string returnName() {
        return name;
    }

    //function declaration
    int returnNumber();

};


//function outside the class
int Player::returnNumber() {
    return number;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    // Player player1;
    // player1.name = "mowa";
    // player1.number = 15;

    Player player1("yashiee", 23);
    cout<<player1.name<<"\n";

    cout<<player1.returnNumber()<<"\n";


    Playerr player2;
    player2.name="raja";
    cout<<player2.name<<"\n";


    return 0;
}