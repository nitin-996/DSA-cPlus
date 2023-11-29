#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row * col - 1;
        int mid = start + (end - start) / 2;

        while (start <= end) {
            int element = matrix[mid / col][mid % col];

            if (element == target) {
                return true;
            }

            if (element < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }

        return false;
    }
};

int main() {
    // Example usage of the Solution class
    Solution solution;

    // Example 2D matrix
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17},
    };

    // Example target values to search
    int target1 = 5;
    int target2 = 20;

    // Perform searches and print results
    cout << "Search for " << target1 << ": " << (solution.searchMatrix(matrix, target1) ? "Found" : "Not Found") << endl;
    cout << "Search for " << target2 << ": " << (solution.searchMatrix(matrix, target2) ? "Found" : "Not Found") << endl;

    return 0;
}


