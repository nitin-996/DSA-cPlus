#include <iostream>
using namespace std;

int main()
{

    // printing of n number

    //     int n;
    //     cin>>n;

    // int i = 1;
    //     while (i<=n)
    //     {
    //        cout<<i<<endl;
    //        i++;
    //     }

    // ################################################

    // sum of n number

    // int sum = 0;
    // int n;

    // cin>>n;

    // for (int i=1; i <= n; i++){
    //     sum +=  i;

    //      }

    //  cout<<sum<<endl;

    // return 0;

    // #####################################

    // sum of all even number

    /*
     int sum = 0 ;
    int n;

    cin>> n;

    for (int i = 0; i <= n; i++)
    {
      if (i%2 == 0){
        cout<<i<<endl;
        sum += i;
      }
    }
    cout<<sum;

    */

    //    #####################################

    int n;
    int i = 2;

    cin>>n;

    while (i < n){

        if (n%i == 0)
        {
            cout << "this is not prime" << endl;
        }
        else
        {
            cout << "this is prime"<<i<<endl;
        }

    i++;}
}
