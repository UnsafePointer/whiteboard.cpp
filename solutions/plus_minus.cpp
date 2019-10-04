#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    uint zeroes = 0;
    uint positive = 0;
    uint negative = 0;
    for (auto const& a : arr) {
        if (a == 0) {
            zeroes++;
        } else if (a > 0) {
            positive++;
        } else {
            negative++;
        }
    }
    cout << showpoint << setprecision(6) << (float)positive / arr.size() << endl;
    cout << showpoint << setprecision(6) << (float)negative / arr.size() << endl;
    cout << showpoint << setprecision(6) << (float)zeroes / arr.size() << endl;
}

int main(int argc, char *argv[]) {
    vector<int> arr = { -4, 3, -9, 0, 4, 1 };
    plusMinus(arr);
    return 0;
}
