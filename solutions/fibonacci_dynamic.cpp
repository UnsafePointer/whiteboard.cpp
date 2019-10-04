#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> fibonacci(int n) {
    vector<int> numbers = vector<int>(n, 0);
    numbers[0] = 0;
    numbers[1] = 1;
    for (int i = 2; i < n; i++) {
        numbers[i] = numbers[i - 1] + numbers[i - 2];
    }
    return numbers;
}

int main(int argc, char *argv[]) {
    for (auto const& r : fibonacci(12)) {
        cout << r << endl;
    }
    return 0;
}
