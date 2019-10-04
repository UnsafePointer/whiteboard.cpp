#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {
    long r = 0;
    for (auto const& a : ar) {
        r += a;
    }
    return r;
}

int main(int argc, char *argv[]) {
    vector<long> ar = { 1000000001, 1000000002, 1000000003, 1000000004, 1000000005 };
    cout << aVeryBigSum(ar) << endl;
    vector<long> ar2 = { };
    for (int i = 0; i < 10; i++) {
        ar2.push_back(pow(10, 10));
    }
    cout << aVeryBigSum(ar2) << endl;
    return 0;
}
