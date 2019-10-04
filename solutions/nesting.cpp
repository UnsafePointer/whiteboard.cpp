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

int solution(string &S) {
    stack<char> counter = stack<char>();
    for (auto const& c : S) {
        if (c == '(') {
            counter.push(c);
        } else {
            if (counter.empty()) {
                return 0;
            }
            counter.pop();
        }
    }
    return counter.empty() ? 1 : 0;
}

int main(int argc, char *argv[]) {
    string S1 = "(()(())())";
    cout << solution(S1) << endl;
    string S2 = "())";
    cout << solution(S2) << endl;
    string S3 = ")()";
    cout << solution(S3) << endl;
    string S4 = "(((";
    cout << solution(S4) << endl;
    return 0;
}
