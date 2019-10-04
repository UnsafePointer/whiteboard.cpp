#include <iostream>
#include <vector>

using namespace std;

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> R = vector<int>(2, 0);
    for (vector<int>::size_type i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            continue;
        } else if (a[i] > b[i]) {
            R[0]++;
        } else {
            R[1]++;
        }
    }
    return R;
}

int main(int argc, char *argv[]) {
    vector<int> a = { 17, 28, 30 };
    vector<int> b = { 99, 16, 8 };
    vector<int> R = compareTriplets(a, b);
    for (auto const& r : R) {
        std::cout << r << std::endl;
    }
    return 0;
}
