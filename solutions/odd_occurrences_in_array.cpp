#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

uint solution(vector<int> &A) {
    sort(A.begin(), A.end());
    for (vector<int>::size_type i = 0; i < A.size() - 1; i += 2) {
        if (A[i] != A[i + 1]) {
            return A[i];
        }
    }
    return A[A.size() - 1];
}

int main(int argc, char *argv[]) {
    vector<int> A = { 9, 3, 9, 3, 9, 7, 9 };
    cout << solution(A) << endl;
    return 0;
}
