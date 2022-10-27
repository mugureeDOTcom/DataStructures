#include<iostream>
#include <algorithm>
using namespace std;
string palindromeCheck (string M)

{
    //REVERSE THE STRING INPUT
    string L = M;
    reverse(L.begin(), L.end());

    //CHECK IF REVERSE IS EQUAL TO ORIGINAL
    if(M == L)
    {
       cout<<"This is a palindrome"<<endl;
    }
        else
        {
            cout<<"This is not a palindrome"<<endl;
        }

}

//main function
int main ()
{   string M;
    cout<<"ENTER WORD TO BE CHECKED: "<<endl;
    cin>>M;
    palindromeCheck(M);
    return 0;
}
