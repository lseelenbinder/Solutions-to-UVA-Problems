#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    vector<int> grades;
    int sum, nLines, nStudents, n;
    double average;
    cin >> nLines;
    for (int i = 0; i < nLines; ++i) {
        sum = 0;
        cin >> nStudents;
        for (int j = 0; j < nStudents; ++j) {
            cin >> n;
            grades.push_back(n);
            sum += n;
        }
        average = (double) sum / (double) nStudents;
        vector<int>::iterator it = grades.begin();
        sum = 0;
        for (; it != grades.end(); ++it) {
            if ((double)*it > average) ++sum;
        }
        printf("%.3f%%\n", (double) sum / (double) nStudents * 100.0);
        grades.clear();
    }
    return 0;
}
