#include <iostream>

using namespace std;

// Function to perform bubble sort on an array of integers
void bubbleSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        // for round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < n - i; j++) {
            // process element till n-i th index
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            // already sorted, break out of the loop
            break;
        }
    }
}

int main() {
    // Example usage of bubbleSort function

    // Create an array of integers
    int myArray[] = {64, 34, 25, 12, 22, 11, 90};

    // Get the number of elements in the array
    int n = sizeof(myArray) / sizeof(myArray[0]);

    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Sort the array using bubble sort
    bubbleSort(myArray, n);

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
