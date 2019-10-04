#include <iostream>
#include <vector>

uint solution(int N) {
    int c = 0;
    bool isCounting = N & 1;
    int solution = 0;
    while (N != 0) {
        bool bit = N & 1;
        N >>= 1;
        if (bit) {
            isCounting = true;
            if (c > solution) {
                solution = c;
            }
            c = 0;
        } else {
            if (isCounting) {
                c++;
            }
        }
    }
    return solution;
}

int main(int argc, char *argv[]) {
    std::cout << solution(32) << std::endl;
    return 0;
}
