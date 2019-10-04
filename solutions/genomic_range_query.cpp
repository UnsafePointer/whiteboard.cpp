#include <iostream>
#include <vector>
#include <array>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    vector<int> A(S.size() + 1, 0);
    vector<int> C(S.size() + 1, 0);
    vector<int> G(S.size() + 1, 0);
    vector<int> T(S.size() + 1, 0);
    for (vector<int>::size_type i = 0; i < S.size(); i++) {
        A[i + 1] = A[i] + (S[i] == 'A' ? 1 : 0);
        C[i + 1] = C[i] + (S[i] == 'C' ? 1 : 0);
        G[i + 1] = G[i] + (S[i] == 'G' ? 1 : 0);
        T[i + 1] = T[i] + (S[i] == 'T' ? 1 : 0);
    }
    vector<int> result = {};
    for (vector<int>::size_type i = 0; i < P.size(); i++) {
        if (A[Q[i] + 1] > A[P[i]]) {
            result.push_back(1);
        } else if (C[Q[i] + 1] > C[P[i]]) {
            result.push_back(2);
        } else if (G[Q[i] + 1] > G[P[i]]) {
            result.push_back(3);
        } else if (T[Q[i] + 1] > T[P[i]]) {
            result.push_back(4);
        }
    }
    return result;
}

int main(int argc, char *argv[]) {
    string S = "CAGCCTA";
    vector<int> P = { 2, 5, 0 };
    vector<int> Q = { 4, 5, 6 };
    vector<int> r = solution(S, P, Q);
    for (auto const& i : r) {
        cout << i << endl;
    }
    return 0;
}
