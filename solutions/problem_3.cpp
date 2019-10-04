#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <limits>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <unordered_set>

using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    unordered_map<int, uint> seenIndices = unordered_map<int, uint>();
    int pairs = 0;
    // O(n)
    for (vector<int>::size_type index = 0; index < A.size(); index++) {
        int number = A[index];
        // Average constant for std::unordered_map
        auto found = seenIndices.find(number);
        if (found != seenIndices.end()) {
            uint &timesSeen = found->second;
            for (vector<int>::size_type seenIndex = 0; seenIndex < timesSeen; seenIndex++) {
                pairs++;
                if (pairs >= 1000000000) {
                    return 1000000000;
                }
            }
            timesSeen++;
        } else {
            seenIndices[number] = 1;
        }
    }
    return pairs;
}

int main(int argc, char *argv[]) {
    vector<int> A = {3, 5, 6, 3, 3, 5};
    cout << solution(A) << endl;
    vector<int> B = {3, 3, 3, 3, 3};
    cout << solution(B) << endl;
    vector<int> C = {1, 2, 3, 1, 2, 1, 2, 3, 3};
    cout << solution(C) << endl;
    return 0;
}
