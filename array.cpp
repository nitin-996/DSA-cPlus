#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// int main()
// {

//     // initialising an array.
//     int numbers[10] = {15, 45, 78, 69, 36, 45, 25, 55};

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)

//     {
//         int write = numbers[i];

//         cout << write << endl;
//     }
// }

// ###################################################################################

// initialize all array with same value

// int main(void)
// {
//     int size = 50;
//     int val;
//     cin>>val;

//     // array declaration
//     int arr[size];
//     int i;

//     // initializing array elements
//     for (i = 0; i < size ; i++){
//         arr[i] = val;
//     }

//      // print array

//      for (i = 0; i < size ; i++){
//         cout<<arr[i];
//     }

//     return 0;
// }

// ##################################################################################################

// array with is_function

// void printarray(int arr[], int size){

// for (int i=1;i<size;i++){

//     int ans = arr[i];

//     cout<<ans<<endl;

//     }

// }

// int main(){

// int num[15]={25,65,98,87,4,565,84,321,22,5464,1,321,35,54,31};

// printarray(num,15);

// }

// ############################################################################################

// swap alternate in array


//   void printarray(int arr[], int n){
// for(int i=0; i <n; i++)
// {
//     cout<<arr[]<<" ";

// }

// cout<<endl;

//   }

// void swapping(int arr[], int size)
// {

//     for (int i = 0; i < size; i + 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);

//             // what swap function does in backgroud
//             // temp = arr[1];
//             // arr[1]=arr[0];
//             // arr[0]=temp;
//         }
//     }
// }

// int main()
// {

//     int even[8] = {8, 6, 3, 5, 4, 2, 7, 8};
//     int odd[7] = {31, 1, 4, 5, 2, 44, 8};


//     //call both arrays.
// }


// ############################################################################################


// cancling duplicate values  


int main(){

    int ans=0;
int size = 7;

int arr[7]={7,6,2,6,7,5,2};

    for(int i=0; i<size;i++){

        ans = ans^arr[i];

        // cout<<arr[i]<<endl;
        // cout<<ans<<endl;
    }

    cout<<ans;
}