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

int solution(vector<int> &H) {
    stack<int> S = stack<int>();
    int blocks = 0;
    for (auto const& h : H) {
        while (!S.empty() && S.top() > h) {
            S.pop();
        }
        if (!S.empty() && S.top() == h) {
        } else {
            blocks++;
            S.push(h);
        }
    }
    return blocks;
}


int main(int argc, char *argv[]) {
    vector<int> H1 = { 8, 8, 5, 7, 9, 8, 7, 4, 8 };
    cout << solution(H1) << endl;
    vector<int> H2 = { 1, 2, 3, 3, 2, 1 };
    cout << solution(H2) << endl;
    vector<int> H3 = { 2, 5, 1, 4, 6, 7, 9, 10, 1 };
    cout << solution(H3) << endl;
    return 0;
}
