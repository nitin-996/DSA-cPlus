#include <iostream>
using namespace std;


int main(){
int n;
int prod=1;
int sum=0;

cin>>n;

while(n!=0)
{


// method how to get last digit from a number
    int digit = n%10;

    prod *= digit;
    sum += digit;

    n = n/10;
    // cout<<n<<" ";

}

int answer = prod - sum;
cout<<answer;


}



// reverse integer
// number of 1 bits
// complement of base 10 integer
// binary to decimal convert
// number complement
// decimal to binary convert