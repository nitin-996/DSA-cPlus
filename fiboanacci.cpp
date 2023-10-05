#include <iostream>

using  namespace std;

int main(){

    int a=0;
    int b =1;
int n;
cin>>n;


for(int i=0;i<=n;i++){

    int nextNumber = a+b;
cout<<nextNumber<<" ";
// swapping values
    a=b;
    b=nextNumber;
}

cout<<a<< " "<< b<<endl;


}
