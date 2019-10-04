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

int solution(int K, vector<int> &A) {
    vector<int>::size_type i = 0;
    uint currentLength = 0;
    uint ropes = 0;
    while (i < A.size()) {
        do {
            currentLength += A[i];
            i++;
        } while (i < A.size() && currentLength < K);
        if (currentLength >= K) {
            ropes++;
        }
        currentLength = 0;
    }
    return ropes;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 1, 2, 3, 4, 1, 1, 3 };
    cout << solution(4, A) << endl;
    vector<int> B = { };
    cout << solution(2, B) << endl;
    srand(time(NULL));
    vector<int> C = { };
    for (int i = 0; i < rand() % 100000; i++) {
        C.push_back(rand() % 1000000000);
    }
    cout << solution(rand() % 1000000000, C) << endl;
    return 0;
}
