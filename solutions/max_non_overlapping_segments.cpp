#include <iostream>
#include <vector>
#include <array>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <limits>
#include <set>
#include <stack>

using namespace std;

int solution(vector<int> &A, vector<int> &B) {
    if (A.empty()) {
        return 0;
    }
    uint maxNonOverlappingCount = 1;
    uint lastEnd = B[0];
    for (vector<int>::size_type i = 1; i < A.size(); i++) {
        if (A[i] > lastEnd ) {
            lastEnd = B[i];
            maxNonOverlappingCount++;
        }
    }
    return maxNonOverlappingCount;
}

int main(int argc, char *argv[]) {
    vector<int> A = { };
    vector<int> B = { };
    cout << solution(A, B) << endl;
    return 0;
}
