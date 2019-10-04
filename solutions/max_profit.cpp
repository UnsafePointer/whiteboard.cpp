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
    int minimumProfit = numeric_limits<int>::max();
    int maximumProfit = 0;
    for (auto const& a : A) {
        minimumProfit = min(minimumProfit, a);
        maximumProfit = max(maximumProfit, a - minimumProfit);
    }
    return maximumProfit;
}


int main(int argc, char *argv[]) {
    vector<int> A = { 23171, 21011, 21123, 21366, 21013, 21367 };
    cout << solution(A) << endl;
    return 0;
}
