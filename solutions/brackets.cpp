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
    stack<char> verifier = {};
    unordered_map<char, char> closings = {};
    closings.insert({ '}', '{' });
    closings.insert({ ']', '[' });
    closings.insert({ ')', '(' });
    for (auto const& c : S) {
        auto closing = closings.find(c);
        if (closing == closings.end()) {
            verifier.push(c);
        } else {
            if (verifier.empty()) {
                return 0;
            } else {
                char last = verifier.top();
                verifier.pop();
                if (closing->second != last) {
                    return 0;
                }
            }
        }
    }
    return verifier.empty() ? 1 : 0;
}


int main(int argc, char *argv[]) {
    string S1 = "{[()()]}";
    cout << solution(S1) << endl;
    string S2 = "([)()]";
    cout << solution(S2) << endl;
    string S3 = "{{{{";
    cout << solution(S3) << endl;
    return 0;
}
