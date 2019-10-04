#include <iostream>
#include <vector>
#include <array>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maxSize = 100000;

int solution(vector<int> &A) {
    if (A.empty()) {
        return 1;
    }
    vector<bool> counter = vector<bool>(100000, false);
    for (auto const& a : A) {
        if (a <= 0) {
            continue;
        }
        int index = a - 1;
        if (index > counter.size()) {
            continue;
        }
        counter[index] = true;
    }
    for (vector<bool>::size_type i = 0; i < counter.size(); i++) {
        if (counter[i] == false) {
            return i + 1;
        }
    }
    return maxSize + 1;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 1, 3, 6, 4, 1, 2 };
    cout << solution(A) << endl;
    vector<int> B = { 1, 2, 3 };
    cout << solution(B) << endl;
    vector<int> C = { -1, -3 };
    cout << solution(C) << endl;
    vector<int> D = { };
    cout << solution(D) << endl;
    vector<int> E = { };
    for (int i = 0; i < maxSize; i ++) {
        E.push_back(i + 1);
    }
    cout << solution(E) << endl;
    vector<int> F = { };
    for (int i = 0; i < maxSize + 5; i ++) {
        F.push_back((maxSize + 10));
    }
    cout << solution(F) << endl;
    return 0;
}
