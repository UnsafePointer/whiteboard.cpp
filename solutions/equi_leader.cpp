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
    uint leaderOccurrences = 0;
    int leader = 0;
    for (vector<int>::size_type i = 0; i < A.size(); i++) {
        auto found = counter.find(A[i]);
        if (found == counter.end()) {
            counter.insert(make_pair(A[i], 1));
        } else {
            found->second++;
            if (found->second > leaderOccurrences && found->second > A.size() / 2) {
                leaderOccurrences = found->second;
                leader = found->first;
            }
        }
    }
    vector<int> occurences = vector<int>(A.size() + 1, 0);
    for (vector<int>::size_type i = 1; i <= A.size(); i++) {
        occurences[i] = occurences[i - 1] + (A[i - 1] == leader ? 1 : 0);
    }
    uint equiLeader = 0;
    for (vector<int>::size_type i = 0; i < A.size(); i++) {
        uint leftOcurrences = occurences[i + 1];
        uint rightOcurrences = occurences[occurences.size() - 1] - leftOcurrences;
        uint leftSize = i + 1;
        uint rightSize = A.size() - leftSize;
        if (leftOcurrences > leftSize / 2 && rightOcurrences > rightSize / 2) {
            equiLeader++;
        }
    }
    return equiLeader;
}


int main(int argc, char *argv[]) {
    vector<int> H1 = { 4, 3, 4, 4, 4, 2 };
    cout << solution(H1) << endl;
    return 0;
}
