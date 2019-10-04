#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int leftToRight = 0;
    int rightToLeft = 0;
    for (vector<int>::size_type i = 0; i < arr.size(); i++) {
        leftToRight += arr[i][i];
        rightToLeft += arr[arr.size() - 1 - i][i];
    }
    return abs(leftToRight - rightToLeft);
}

int main(int argc, char *argv[]) {
    vector<vector<int>> arr = { {11, 2, 4}, {4, 5, 6}, {10, 8, -12} };
    cout << diagonalDifference(arr) << endl;
    vector<vector<int>> arr2 = { {1, 2, 3}, {4, 5, 6}, {9, 8, 9} };
    cout << diagonalDifference(arr2) << endl;
    return 0;
}
