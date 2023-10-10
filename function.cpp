#include <iostream>
using namespace std;

// 1-> even
// 0 -> odd

// bool iseven(int a){
// //odd
// if(a&1){
//     return 0;
// }else {// even

// return 1;
// }

// }

// int main(){

//     int num;
//     cin>>num;

//     if(iseven(num)){
//         cout<<"number is even"<<endl;

//     }else{
//         cout<<"number is odd"<<endl;
//     }
// }

// ############################################################################

// jo function kuch return nhi kerta use void se define kerte has_facet

// printing counting

// void printCounting(int n){
//     for(int i=1; i <=n ; i++){
//         cout<<i<<endl;
//     }
// }

// int main (){
//     int n;
//     cin>>n;

//     printCounting(n);

//     return 0;

// }

// ####################################################################################

// 1-> prime no.
// 0-> not a prime no.

// bool isPrime(int n)
// {
//     // divide ho gya h, not a prime number.
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
        
//     }
//     return 1;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     if (isPrime(n))
//     {

//         cout << "this is prime number";
//     }
//     else
//     {
//         cout << "this is not a prime number";
//     }
// }


// #########################################################################################

int factorial(int n){

    int fact = 1;

    for(int i =1; i<=n; i++){
        fact = fact*i;
    }

    return fact;
}

int nCr(int n , int r){

    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return num/denom;
}

int main(){

    int n ,r;
    cin>>n>>r;

cout<< nCr(n,r)<<endl;


}