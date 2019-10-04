#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int X, int Y, int D) {
    int reminder = (Y - X) % D;
    int result = (Y - X) / D;
    if (reminder == 0) {
        return result;
    } else {
        return result + 1;
    }
}

int main(int argc, char *argv[]) {
    cout << solution(1, 5, 2);
    return 0;
}
