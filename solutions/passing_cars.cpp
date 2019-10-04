#include <iostream>
#include <vector>
#include <array>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    uint numberOfZeroes = 0;
    uint numberOfPairs = 0;
    for (vector<int>::size_type i = 0; i < A.size(); i++) {
        if (A[i] < 0 || A[i] > 1) {
            continue;
        }
        if (!A[i]) {
            numberOfZeroes++;
        } else {
            numberOfPairs += numberOfZeroes;
        }
    }
    if (numberOfPairs > 1000000000) {
        return -1;
    }
    return numberOfPairs;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 0, 1, 0, 1, 1 };
    cout << solution(A) << endl;
    vector<int> B = { 0, 1 };
    cout << solution(B) << endl;
    vector<int> C = { };
    cout << solution(C) << endl;
    vector<int> D = { 1 };
    cout << solution(D) << endl;
    vector<int> E = { 0 };
    cout << solution(E) << endl;
    vector<int> F = {};
    for (int i = 0; i < 100000; i++) {
        F.push_back(rand() % 2);
    }
    cout << solution(F) << endl;
    vector<int> G = {};
    for (int i = 0; i < 50000; i++) {
        G.push_back(rand() % 2);
    }
    cout << solution(G) << endl;
    vector<int> H = {};
    for (int i = 0; i < 50000; i++) {
        H.push_back(rand() % 100);
    }
    cout << solution(H) << endl;

    return 0;
}
