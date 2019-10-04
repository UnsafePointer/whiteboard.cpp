#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <limits>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int solution(string &S) {
    // Division by 2 is the same as shifting the least significant bit
    // If the least significat bit is 1, then it will take two steps to shift it: (substract 1 and divide 1)
    int totalSteps = 0;
    int stepsToLastSeen1MSB = 0;
    if (S.size() == 1 && S[0] == '0') {
        return 0;
    }
    for (int i = S.size(); i > 0; i--) {
        if (S[i-1] == '0') {
            stepsToLastSeen1MSB++;
        } else {
            // We should only count steps as we encounter 1 as MSB because the string
            // can contain leading zeroes
            totalSteps += stepsToLastSeen1MSB;
            totalSteps += 2;
            stepsToLastSeen1MSB = 0;
        }
    }
    // The last step is count as substract + division, but we don't have to divide 0 between 1 because it's already zero
    // so we substract 1
    return totalSteps - 1;
}

int main(int argc, char *argv[]) {
    string s = "011100";
    cout << solution(s) << endl;
    string s2 = "0";
    cout << solution(s2) << endl;
    string s3 = "1";
    cout << solution(s3) << endl;
    string s4 = "000011110100001000111111";
    cout << solution(s4) << endl;
    string s5 = "1111";
    cout << solution(s5) << endl;
    string s6 = "11110000";
    cout << solution(s6) << endl;
    string s7 = "11110100001001000000";
    cout << solution(s7) << endl;
    return 0;
}

