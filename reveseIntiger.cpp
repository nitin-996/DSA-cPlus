// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the 
// value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// #include <iostream>
// using namespace std;

// int main(){

//     int ans =0;

//     int x;
//     cin>>x;

//     while(x!=0){
//         int digit = x%10;    // getting last digit out of a digit

//         if((ans > INT32_MAX/10) || (ans< INT32_MIN/10))
//         {
//             return 0;
//         }

//         ans = (ans*10)+digit;
//         x=x/10;

//     }
// cout<<ans;

// }





// #########################################################################################

// complement of base 10 integer

// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.




// #include <iostream>
// using namespace std;

// int main(){
// int n ;
// int m= n ;
// cin>>n;

// int mask = 0 ;

// // used mask 

// if(n == 0) return 0;

// while(m!=0){

//     mask = (mask << 1) |1;
// m = m >> 1;
    
// }

// int ans = (~n) & mask;

// cout<< ans;



   
// }



// ###################################################################################################



// Power of two (leet code)

#include <iostream>
#include <cmath>

using namespace std;

int main(){
int n ;

cin>>n;

for(int i=0; i <=30 ; i++){
    int ans = pow(2,i);
    if (ans == n){
        cout<< true<<endl;
       
    }


}



   
}