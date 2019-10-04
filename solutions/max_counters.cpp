#include <iostream>
#include <vector>
#include <array>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    int lastIncreaseAll = 0;
    int maxIncrease = 0;
    vector<int> counter = vector<int>(N, 0);
    for(vector<int>::size_type i = 0; i < A.size(); i++) {
        if (A[i] == N + 1) {
            lastIncreaseAll = maxIncrease;
        } else {
            counter[A[i] - 1] = max(counter[A[i] - 1], lastIncreaseAll);
            counter[A[i] - 1]++;
            maxIncrease = max(maxIncrease, counter[A[i] - 1]);
        }
    }

    for (vector<int>::size_type i = 0; i <= counter.size(); i++) {
        counter[i] = max(counter[i], lastIncreaseAll);
    }
    return counter;
}

int main(int argc, char *argv[]) {
    // vector<int> A = {1, 10, 1, 10, 1, 10, 1, 10, 1, 10};
    vector<int> A = {3, 4, 4, 6, 1, 4, 4};
    vector<int> r = solution(5, A);
    for (auto const& a : r) {
        cout << a << endl;
    }
    return 0;
}
