#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <limits>
#include <algorithm>
#include <cstring>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if (v2 > v1) {
        return "NO";
    }
    while (x1 < x2) {
        x1 += v1;
        x2 += v2;
        if (x1 == x2) {
            return "YES";
        }
    }
    return "NO";
}

int main(int argc, char *argv[]) {
    cout << kangaroo(0, 3, 4, 2) << endl;
    cout << kangaroo(0, 2, 5, 3) << endl;
    cout << kangaroo(0, 2, 10000, 1) << endl;
    return 0;
}
