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

int solution(vector<int> &A) {
    int count = 0;
    int expected = 0;
    int shining = 0;
    for (vector<int>::size_type i = 0; i < A.size(); i++) {
        count += A[i];
        expected += (i + 1);
        if (count == expected) {
            shining++;
        }
    }
    return shining;
}

int main(int argc, char *argv[]) {
    // srand (time(NULL));
    vector<int> B = { 2, 1, 3, 5, 4 };
    cout << solution(B) << endl;
    vector<int> C = { 2, 3, 4, 1, 5 };
    cout << solution(C) << endl;
    vector<int> A = { 1, 3, 4, 2, 5 };
    cout << solution(A) << endl;
    vector<int> D = { 1, 2, 3 };
    // for (int i = 0; i < 100000; i++) {
    //     D.push_back(rand() % 2000000000 - 1000000000);
    // }
    cout << solution(D) << endl;
    return 0;
}

