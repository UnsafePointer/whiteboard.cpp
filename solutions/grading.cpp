#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    for (auto& grade : grades) {
        int r = grade % 10;
        if (grade < 38) {
            continue;
        }
        if (r > 7) {
            grade += 10 - r;
        } else if (r >= 3 && r <= 5) {
            grade += 5 - r;
        }
    }
    return grades;
}

int main(int argc, char *argv[]) {
    vector<int> grades = { 73, 67, 38, 33, 42, 51, 38 };
    vector<int> R = gradingStudents(grades);
    for (auto const& r : R) {
        cout << r << endl;
    }
    return 0;
}
