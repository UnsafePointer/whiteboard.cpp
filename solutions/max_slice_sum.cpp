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
    int maxSlice = -1000000;
    int result = -1000000;
    for (auto const& a : A) {
        maxSlice = max(a, maxSlice + a);
        result = max(result, maxSlice);
    }
    return result;
}


int main(int argc, char *argv[]) {
    vector<int> A = { 3, 2, -6, 4, 0 };
    cout << solution(A) << endl;
    vector<int> B = { -10 };
    cout << solution(B) << endl;
    return 0;
}
