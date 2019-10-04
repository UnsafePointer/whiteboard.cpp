#include <iostream>
#include <vector>
#include <array>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <limits>

using namespace std;

int solution(vector<int> &A) {
    uint minIdx = 0;
    double minAvg = numeric_limits<double>::max();
    for (vector<int>::size_type i = 0; i < A.size() - 1; i++) {
        double avgTwo = (A[i] + A[i + 1]) / 2.0f;
        if (avgTwo < minAvg) {
            minIdx = i;
            minAvg = avgTwo;
        }
        if (i > A.size() - 2) {
            continue;
        }
        double avgThree = (A[i] + A[i + 1] + A[i + 2]) / 3.0f;
        if (avgThree < minAvg) {
            minIdx = i;
            minAvg = avgThree;
        }
    }
    return minIdx;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 4, 2, 2, 5, 1, 5, 8 };
    cout << solution(A) << endl;
    return 0;
}
