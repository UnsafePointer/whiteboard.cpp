#include <iostream>
#include <vector>
#include <array>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <limits>
#include <set>
#include <stack>

using namespace std;

int solution(vector<int> &A) {
    if (A.size() == 1) {
        return 0;
    }
    unordered_map<int, uint> counter = unordered_map<int, uint>();
    uint dominator = 0;
    int dominatorIndex = -1;
    for (vector<int>::size_type i = 0; i < A.size(); i++) {
        auto found = counter.find(A[i]);
        if (found == counter.end()) {
            counter.insert(make_pair(A[i], 1));
        } else {
            found->second++;
            if (found->second > dominator && found->second > A.size() / 2) {
                dominator = found->second;
                dominatorIndex = i;
            }
        }
    }
    return dominatorIndex;
}


int main(int argc, char *argv[]) {
    vector<int> H1 = { 3, 4, 3, 2, 3, -1, 3, 3 };
    cout << solution(H1) << endl;
    vector<int> H2 = { 1, 2, 1, 1 };
    cout << solution(H2) << endl;
    vector<int> H3 = { };
    cout << solution(H3) << endl;
    vector<int> H4 = { 1 };
    cout << solution(H4) << endl;
    return 0;
}
