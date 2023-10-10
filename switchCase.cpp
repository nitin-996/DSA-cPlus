#include <iostream>
using namespace std;

// single quotes are used ' ' to show character data type.

int main()
{

    //     char op ;
    //     cout<<"type the operation(*,+,%,-,/)"<<endl;
    //     cin>>op;

    //     int a;
    //     cout<<"type the value of a"<<endl;

    // cin>>a;
    // int b;
    // cout<<"type the value of b"<<endl;
    // cin>>b;

    // switch(op){

    //     case '+': {cout<<(a+b)<<endl;}
    // break;
    // case '-': cout<<(a-b)<<endl;
    // break;
    // case '%': cout<<(a%b)<< endl;
    // break;
    // case '/':cout<<(a/b)<<endl;
    // break;
    // case '*': cout<<(a*b)<<endl;

    // break;
    // default:cout<<"type valide operation ";

    // }

    int amount;
    cout << "Enter the amount in rupees: ";
    cin >> amount;

    int hundreds = 0, fifties = 0, twenties = 0, ones = 0;

    switch (amount / 100)
    {
    case 0:
        break;
    default:
        hundreds = amount / 100;
        amount %= 100;  
    }
    switch (amount / 50)
    {
    case 0:
        break;
    default:
        fifties = amount / 50;
        amount %= 50;
    }

    switch (amount / 20)
    {
    case 0:
        break;
    default:
        twenties = amount / 20;
        amount %= 20;
    }

    ones = amount;

    cout << "Number of 100 rupee notes: " << hundreds << endl;
    cout << "Number of 50 rupee notes: " << fifties << endl;
    cout << "Number of 20 rupee notes: " << twenties << endl;
    cout << "Number of 1 rupee notes: " << ones << endl;

    return 0;
}
