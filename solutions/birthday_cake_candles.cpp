#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <limits>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(vector<int> ar) {
    sort(ar.begin(), ar.end());
    int tallest = ar[ar.size() - 1];
    vector<int>::size_type lowerBound = lower_bound(ar.begin(), ar.end(), tallest) - ar.begin();
    return ar.size() - lowerBound;
}

int main(int argc, char *argv[]) {
    vector<int> ar = { 2, 2, 1, 3, 3, 3, 5 };
    cout << birthdayCakeCandles(ar) << endl;
    return 0;
}
