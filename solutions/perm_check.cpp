#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    if (A.size() == 1 && A[0] == 1) {
        return 1;
    }
    vector<bool> counter = vector<bool>(A.size(), false);
    for (auto const&a : A) {
        if (a > A.size()) {
            return 0;
        }
        if (counter[a - 1]) {
            return 0;
        }
        counter[a - 1] = true;
    }
    for (auto const& a : counter) {
        if (!a) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 1000000000 };
    cout << solution(A) << endl;
    return 0;
}
