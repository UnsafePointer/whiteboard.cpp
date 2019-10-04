#include <iostream>
#include <vector>
#include <array>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <limits>
#include <set>

using namespace std;

int solution(vector<int> &A) {
    unordered_set<int> counter = {};
    for (auto const& a : A) {
        counter.insert(a);
    }
    return counter.size();
}

int main(int argc, char *argv[]) {
    vector<int> A = {2, 1, 1, 2, 3, 1};
    cout << solution(A) << endl;
    vector<int> B = {};
    int iterations = 100000;
    while (iterations > 0) {
        B.push_back(rand() % 2000000 - 1000000);
        iterations--;
    }
    cout << solution(B) << endl;
    return 0;
}
