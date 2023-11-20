#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    // Example usage of selectionSort
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();

    selectionSort(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  // Make sure to include this line

    return 0;
}
