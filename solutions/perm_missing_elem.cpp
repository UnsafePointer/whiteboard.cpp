#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    uint last = 0;
    for (vector<int>::size_type i = 0; i < A.size(); i += 2) {
        if (last + 1 != A[i]) {
            return last + 1;
        }
        if ((A[i] + 1) != A[i+1]) {
            return A[i] + 1;
        }
        last =  A[i+1];
    }
    return A.size() + 1;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 1 };
    cout << solution(A) << endl;
    return 0;
}
