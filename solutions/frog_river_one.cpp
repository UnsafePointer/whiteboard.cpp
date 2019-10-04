#include <iostream>
#include <vector>
#include <array>

using namespace std;

int solution(int X, vector<int> &A) {
    vector<bool> counter = vector<bool>(X + 1, false);
    counter[0] = true;
    int unseen = X;
    for (vector<int>::size_type i = 0; i < A.size(); i++) {
        if (!counter[A[i]]) {
            counter[A[i]] = true;
            unseen--;
            if (unseen == 0) {
                return i;
            }
        }
    }
    return -1;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 2, 2, 2, 2, 2, 2 };
    cout << solution(2, A) << endl;
    vector<int> B = { 1, 3, 1, 4, 2, 3, 5, 4 };
    cout << solution(5, B) << endl;
    vector<int> C = { 1, 3, 1, 3, 2, 1, 3 };
    cout << solution(3, C) << endl;
    return 0;
}
