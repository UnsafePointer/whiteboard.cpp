#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> &A, uint K) {
    if (K == A.size()) {
        return A;
    }
    if (A.size() == 0) {
        return A;
    }
    while (K > 0) {
        int back = A[A.size()-1];
        A.pop_back();
        A.insert(A.begin(), back);
        K--;
    }
    return A;
}

int main(int argc, char *argv[]) {
    vector<int> A = { };
    vector<int> B = solution(A, 5);
    for (auto const& value : B) {
        cout << value << endl;
    }
    return 0;
}
