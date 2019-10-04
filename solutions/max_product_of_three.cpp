#include <iostream>
#include <vector>
#include <array>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <limits>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    int top = A[A.size() - 1] * A[A.size() - 2] * A[A.size() - 3];
    int bottom = A[0] * A[1] * A[A.size() - 1];
    return top > bottom ? top : bottom;
}


int main(int argc, char *argv[]) {
    // vector<int> A = {-3, 1, 2, -2, 5, 6};
    vector<int> A = {-5, 5, -5, 4};
    cout << solution(A) << endl;
    return 0;
}
