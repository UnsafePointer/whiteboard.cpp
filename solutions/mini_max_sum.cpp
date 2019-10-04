#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <limits>

using namespace std;

void miniMaxSum(vector<int> arr) {
    long total = 0;
    int smallest = numeric_limits<int>::max();
    int biggest = numeric_limits<int>::min();
    for (auto const& a : arr) {
        total += a;
        if (a < smallest) {
            smallest = a;
        } if (a > biggest) {
            biggest = a;
        }
    }
    cout << total - biggest << " " << total - smallest << endl;
}

int main(int argc, char *argv[]) {
    vector<int> arr = { 1, 3, 5, 7, 9 };
    miniMaxSum(arr);
    return 0;
}

