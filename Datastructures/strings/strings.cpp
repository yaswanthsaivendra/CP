#include<bits/stdc++.h>

using namespace std;


int main(){
    
    //string
    string str="hello";
    cout<<str<<"\n";
    
    //in cpp, we can directly add and compare strings.
    string str1="world";
    cout<<str+str1<<"\n";
    if (str==str1)
    {
        cout<<"equal"<<"\n";
    }
    else
    {
        cout<<"not equal"<<"\n";
    }

    //we can access each character in sting using index.(as string is a character array).
    string str2="yash";
    str2[0]='Y';
    cout<<str2<<"\n";

    //we can loop through the string of unknown length using size() function
    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<"\n";
    }
    
    //to take input of a complete line with spaces.
    string str3;
    cout<<"Enter the string with spaces: ";
    getline(cin,str3);
    cout<<str3<<"\n";

    //common problem which occurs while taking input of multiple lines in the case of test cases using looping.
    //soln to avoid that problem.
    int t;  //let t be the test cases.
    cout<<"enter the number of lines u want to enter: ";
    cin>>t;
    cin.ignore();   //if we dont use this line, the first input taken by getline inside the loop will be the new line character and space after number t in the input.
    while (t--)
    {
        string s;
        getline(cin,s);
        cout<<s<<"\n";
    }

    //using push_back() to reverse a string
    string str4;
    cout<<"enter a string to reverse it: ";
    cin>>str4;
    cin.ignore();
    string str_rev;
    for (int i = str4.size()-1; i >=0; i--)
    {
        str_rev.push_back(str4[i]);
    }
    cout<<str_rev<<"\n";
    //we can push_back() to add a character at the end of the string.
    //similarly we can use pop_back() to remove a character from the end of the string.



   //strings are used to input very large numbers which can't fit in any integer data type.
   //we input them as a string and access each digit in the number by converting the corresponding character into integer as shown below.
   string str5="12345678910111213141516171819"; //very large number
   cout<<str5[str5.size()-1]<<"\n"; //gives last digit as character.
   cout << (int)str5[str5.size() - 1] << "\n"; //gives ascii value of last digit.
   int last_digit = str5[str5.size() - 1]-'0'; //here we r subracting the ascii value of zero from ascii value of last digit of number and type coversion to int.
   cout << last_digit<<"\n";     //this gives the exact last digit.

   // To remove characters from the middle of the string.
   string s = "yash";
   s.erase(1, 2);   // s.erase(starting index, number of characters to be deleted)
   cout<<s<<"\n"; //yh

   return 0;
}