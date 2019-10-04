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

int solution(vector<int> &A) {
    if (A.size() < 3) {
        return 0;
    }
    sort(A.begin(), A.end());
    uint trianglesCount = 0;
    for (vector<int>::size_type P = 0; P < A.size() - 2; P++) {
        uint Q = P + 1;
        uint R = P + 2;
        while (R < A.size()) {
            if (A[P] + A[Q] > A[R]) {
                trianglesCount += R - Q;
                R++;
            } else if (Q < R - 1) {
                Q++;
            } else {
                R++;
                Q++;
            }
        }
    }
    return trianglesCount;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 1, 2, 5 };
    cout << solution(A) << endl;
    return 0;
}
