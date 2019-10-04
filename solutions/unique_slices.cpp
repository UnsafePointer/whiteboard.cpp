#include <iostream>
#include <vector>
#include <set>

using namespace std;

int solution(int M, vector<int> &A) {
    vector<bool> uniques = vector<bool>(M + 1, false);
    uint front = 0;
    uint uniqueSlices = 0;
    for (vector<int>::size_type back = 0; back < A.size(); back++) {
        while (front < A.size() && !uniques[A[front]]) {
            uniques[A[front]] = true;
            front++;
            uniqueSlices++;
        }
        if (uniqueSlices > 1000000000) {
            return 1000000000;
        }
        front = back + 1;
        fill(uniques.begin(), uniques.end(), false);
    }
    return uniqueSlices;
}

int main(int argc, char *argv[]) {
    vector<int> A = { 3, 4, 5, 5, 2 };
    cout << solution(6, A) << endl;
    vector<int> B = { 1, 1, 3, 2, 1 };
    cout << solution(3, B) << endl;
    vector<int> C = { 1, 1, 1, 1, 1 };
    cout << solution(1, C) << endl;
    vector<int> D = { 0 };
    cout << solution(0, D) << endl;
    return 0;
}
