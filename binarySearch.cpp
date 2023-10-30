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


// find pivot element in rotated sorted array

// int getpivot(int arr[], int n){

//     int s=0;
//     int e=n-1; //4
//     int mid = s+(e-s)/2; // value of mid is 10

//     while (s<e)
//     {

//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
        
//         mid=s+ (e-s)/2;
//     }
//     return e;
    
// }

// int main(){
//     int arr[5] = {6,7,10,1,2};

//     cout<< arr[getpivot(arr,5)]; // got hthe pivot element value


// }

// ########################################################################################

// 33. leetcode = Search in Rotated Sorted Array


#include <iostream>
#include <vector>

int searchInRotatedSortedArray(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Found the target
        }

        if (nums[left] <= nums[mid]) {
            // Left half is sorted
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            // Right half is sorted
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1; // Target not found
}

// int search(const std::vector<int>& nums, int target) {
//     int left = 0;
//     int right = nums.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (nums[mid] == target) {
//             return mid; // Found the target
//         }

//         if (nums[left] <= nums[mid]) {
//             // Left half is sorted
//             if (nums[left] <= target && target < nums[mid]) {
//                 right = mid - 1;
//             } else {
//                 left = mid + 1;
//             }
//         } else {
//             // Right half is sorted
//             if (nums[mid] < target && target <= nums[right]) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }
//     }

//     return -1; // Target not found
// }

int main() {
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 17;

    int result = searchInRotatedSortedArray(nums, target);

    if (result != -1) {
        std::cout << "Target " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Target " << target << " not found in the array." << std::endl;
    }

    return 0;
}


// #####################################################################################################################

//  find square root with decimal value using binary search.

#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;



