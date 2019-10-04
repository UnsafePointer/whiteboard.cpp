#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <sstream>

using namespace std;

void staircase(int n) {
    stringstream ss = stringstream();
    for (int i = 1; i <= n; i++) {
        ss << string(n - i, ' ');
        ss << string(i, '#');
        ss << '\n';
    }
    cout << ss.str();
}

int main(int argc, char *argv[]) {
    staircase(6);
    return 0;
}
