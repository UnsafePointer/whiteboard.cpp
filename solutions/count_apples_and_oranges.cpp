#include <iostream>
#include <vector>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleInTheHouse = 0;
    for (auto& apple : apples) {
        apple += a;
        if (apple >= s && apple <= t) {
            appleInTheHouse++;
        }
    }
    int orangeInTheHouse = 0;
    for (auto& orange : oranges) {
        orange += b;
        if (orange >= s && orange <= t) {
            orangeInTheHouse++;
        }
    }
    cout << appleInTheHouse << endl;
    cout << orangeInTheHouse << endl;
}

int main(int argc, char *argv[]) {
    countApplesAndOranges(7, 11, 5, 15, {-2, 2, 1}, {5, -6});
    return 0;
}
