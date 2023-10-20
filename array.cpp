#include <iostream>
#include <bits/stdc++.h>
#include <vector>  // used for intersection array solution

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


// int main(){

//     int ans=0;
// int size = 7;

// int arr[7]={7,6,2,6,7,5,2};

//     for(int i=0; i<size;i++){

//         ans = ans^arr[i];

//         // cout<<arr[i]<<endl;
//         // cout<<ans<<endl;
//     }

//     cout<<ans;
// }

// #########################################################################################

// Intersection Of Two Sorted arrays

// vector<int> findIntersection(const vector<int>& arr1, const vector<int>& arr2) {
//     vector<int> result;
//     int i = 0; // Index for the first array
//     int j = 0; // Index for the second array

//     while (i < arr1.size() && j < arr2.size()) {
//         if (arr1[i] < arr2[j]) {
//             // If the element in the first array is smaller, move to the next element in the first array.
//             i++;
//         } else if (arr1[i] > arr2[j]) {
//             // If the element in the second array is smaller, move to the next element in the second array.
//             j++;
//         } else {
//             // If the elements are equal, it's an intersection. Add it to the result and move to the next elements in both arrays.
//             result.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//     }

//     return result;
// }

// int main() {
//     vector<int> arr1 = {1, 3, 4, 5, 7};
//     vector<int> arr2 = {3, 5, 6};

//     vector<int> intersection = findIntersection(arr1, arr2);

//     cout << "Intersection of the two arrays: ";
//     for (int num : intersection) {
//         cout << num << " ";
//     }

//     return 0;
// }


// another approch to solve above question

// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> findIntersection(const vector<int>& arr1, vector<int> arr2) {
//     vector<int> ans;
//     int n = arr1.size();
//     int m = arr2.size();

//     for (int i = 0; i < n; i++) {
//         int element = arr1[i];

//         for (int j = 0; j < m; j++) {
//             if (element < arr2[j])
//                 break;

//             if (element == arr2[j]) {
//                 ans.push_back(element);
//                 arr2[j] = -2;
//                 break;
//             }
//         }
//     }

//     return ans;
// }

// int main() {
//     vector<int> arr1 = {1, 3, 4, 5, 7};
//     vector<int> arr2 = {3, 5, 6};

//     vector<int> intersection = findIntersection(arr1, arr2);

//     cout << "Intersection of the two arrays: ";
//     for (int num : intersection) {
//         cout << num << " ";
//     }

//     return 0;
// }


// ##############################################################################

//   pair sum array problem


// vector<vector<int>> pairSum(vector<int> &arr, int s) {
//     vector<vector<int>> ans;

//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = i + 1; j < arr.size(); j++) {
//             if (arr[i] + arr[j] == s) {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }

//     sort(ans.begin(), ans.end());
//     return ans;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     int targetSum = 7;

//     vector<vector<int>> result = pairSum(arr, targetSum);

//     for (vector<int> pair : result) {
//         cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
//     }

//     return 0;
// }

// #############################################################################################################

// how many times number repeated

// int countOccurrences(const vector<int>& arr, int target) {
//     int count = 0;

//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] == target) {
//             count++;
//         }
//     }

//     return count;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 2, 4, 2, 5};
//     int target = 2;

//     int occurrences = countOccurrences(arr, target);

//     cout << "The number " << target << " appears " << occurrences << " times in the array." << endl;

//     return 0;
// }


// ###########################################################################################################################



void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {
    int i = 0, j = n - 1;

    while (i < j) {
        while (arr[i] == 0) {
            i++;
        }

        while (arr[j] == 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {
    int arr[8] = {1, 1, 0, 0, 1, 0, 1, 0};

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}  