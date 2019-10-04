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

int solution(vector<int> &A, vector<int> &B) {
    stack<int> upstream; // direction 0
    stack<int> downstream; // direction 1
    for (vector<int>::size_type i = 0; i < A.size(); i++) {
        if (B[i]) {
            downstream.push(A[i]);
        } else {
            while (!downstream.empty()) {
                int top = downstream.top();
                if (A[i] > top) {
                    downstream.pop();
                } else {
                    break;
                }
            }
            if (downstream.empty()) {
                upstream.push(A[i]);
            }
        }
    }
    return upstream.size() + downstream.size();
}


int main(int argc, char *argv[]) {
    vector<int> A = { 4, 3, 2, 1, 5 };
    vector<int> B = { 0, 1, 0, 0, 0 };
    cout << solution(A, B) << endl;
    vector<int> C = { 4, 3, 5, 1, 5 };
    vector<int> D = { 1, 0, 0, 1, 0 };
    cout << solution(C, D) << endl;
    return 0;
}
