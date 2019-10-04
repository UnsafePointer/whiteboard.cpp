#include <iostream>
#include <vector>

uint solution(std::vector<int> A) {
    int left = 0;
    int n = A.size();
    for (std::vector<int>::size_type i = 0; i < n - 1; i++) {
        left += A[i];
    }
    int accumulator = A[n - 1];
    int result = abs(left - accumulator);
    for (int i = n - 2; i > 0; i--) {
        left -= A[i];
        accumulator += A[i];
        uint tmp = abs(left - accumulator);
        if (tmp < result) {
            result = tmp;
        }
    }
    return result;
}

int main(int argc, char *argv[]) {
    std::vector<int> a = {-1000, 1000};
    std::cout << solution(a) << std::endl;
    std::vector<int> b = { 3, 1, 2, 4, 3 };
    std::cout << solution(b) << std::endl;
    return 0;
}
