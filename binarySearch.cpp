#include <iostream> 
using namespace std;

// int binarysearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <=end){
//         if(arr[mid] == key)
// {
//     return mid;
// }   

// if (key > arr[mid]){
//     start = mid +1;

// }else{
//     end = mid-1;
// }

// mid = start + (end-start)/2;


//  }

//  return -1;
 
// }


// int main (){

//     int even[6]={2,4,6,8,12,18};
//     int odd[5]={3,5,7,8,11};

//     int index = binarysearch(even , 6 ,12);

//     cout<< "even"<< index;

//      int index = binarysearch(odd , 5, 11);
    
//     cout<< "odd"<< odd;



// }



// ###############################################################################################################

// int binarysearch(int arr[], int n, int key) {

//     int s = 0;
//     int e = n-1;

//     int mid = s +(e-s)/2;
// int ans = -1;

//     while(s <= e){

//         if (arr[mid] == key){
//             ans = mid;
//             e = mid-1;

//         }

//         else if(key > arr[mid]){
//             // right me jao
//             s= mid +1;
//         }
//         else if(key<arr[mid])
//         {
//             //left me jao
//             e=mid-1;

//         }

//         mid = s+(e-s)/2;
        
        


//     }

//     return ans;
// }


// int main(){
//     int even[5]={1,2,3,4,5};


// cout<<binarysearch(even ,5,3);
//     return 0;
// }

// ######################################################################################################

// Questions

// find pivot in array.
// find peak element in mountain array

// #######################################################################################################


// get pivot element

int getpivot(int arr[], int n){

    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+ (e-s)/2;
    }
    return s;
    
}

int main(){
    int arr[5] = {3,7,10,17,1};


}