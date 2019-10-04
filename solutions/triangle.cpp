#include <iostream>
#include <vector>
#include <array>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <limits>
#include <set>

using namespace std;

int solution(vector<int> &A) {
    if (A.size() < 3) {
        return 0;
    }
    sort(A.begin(), A.end());
    for (vector<int>::size_type i = 0; i < A.size() - 2; i++) {
        if (A[i] + A[i + 1] > A[i + 2]) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 10, 50, 5, 1 };
    cout << solution(A) << endl;
    vector<int> B = { 5, 3, 3 };
    cout << solution(B) << endl;
    vector<int> C = { };
    for (int i = 0; i < 100000; i++) {
        C.push_back(rand() % (2147483647) - 2147483647/2);
    }
    cout << solution(C) << endl;
    return 0;
}
