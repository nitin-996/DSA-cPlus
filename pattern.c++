#include <iostream>
using namespace std;

int main()
{

    // this print 1234 its a loop

    // int i = 1;
    // int n;

    // cin >> n;

    // while (i <= n)
    // {

    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout <<  j;
    //         j++;
    //     }

    //     i++;
    //     cout<<endl;
    // }

    // ##################################################

    // this prints 321
    // formaula used n - j +1

    // int i = 1;
    // int n;

    // cin >> n;

    // while (i <= n)
    // {

    //     int j = 1;
    //     while (j <= n)
    //     {
    //         int p = n - j + 1;
    //         cout << p;

    //         j++;
    //     }

    //     i++;
    //     cout << endl;
    // }

    // ##################################################

    //     int i = 1;
    //     int n;
    //     cin >> n;
    //     int count = 1;

    //     while (i <= n)
    //     {

    //         int j = 1;
    //         while (j <= n)
    //         {
    //             cout<<count<<" ";
    //             count++;
    //             // cout << j; // this print no as 1 2 3 4 5

    //             j++;
    //         }
    // cout<<endl;
    //         i++;
    //     }

    // #########################################

    int row = 1;

    int n;
    cin >> n;

    while (row <= n)
    {

        int col = 1;
        char ch = 'A';

        while (col <= n)
        {

            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}