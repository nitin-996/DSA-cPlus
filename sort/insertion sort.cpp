#include <iostream>

using namespace std;


void insertionSort(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--) {
            if (arr[j] > temp) {
                // Shift
                arr[j + 1] = arr[j];
            } else {
                // Ruk jao
                break;
            }
        }

        // Copy temp value
        arr[j + 1] = temp;

        // Debugging: Print the array after each pass
        cout << "After pass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example usage
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(n, arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
