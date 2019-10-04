#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <limits>
#include <algorithm>
#include <cstring>

using namespace std;

string timeConversion(string s) {
    struct tm tm;
    memset(&tm, 0, sizeof(struct tm));
    strptime(s.c_str(), "%I:%M:%S%p", &tm);
    char buffer[255];
    strftime(buffer, sizeof(buffer), "%H:%M:%S", &tm);
    return string(buffer);
}


int main(int argc, char *argv[]) {
    string s = "07:05:45PM";
    cout << timeConversion(s) << endl;
    return 0;
}
