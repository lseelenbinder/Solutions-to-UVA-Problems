// Name: Luke Seelenbinder
// Username: luke.seelenbinder
// Name: 3n+1 (Dynamic Programming)
// Progam ID: 100
// Status: Accepted

#include <iostream>
#define LENGTH 1000000

using namespace std;

void threen(const long long int n, long long int &count,
        int* solved_table)
{
    if (n <= LENGTH && solved_table[n] != -1) {
        count += solved_table[n];
        return;
    } else {
        ++count;
        if (n == 1) {
            return;
        } else if (n % 2) {
            threen(3*n + 1, count, solved_table);
        } else {
            threen(n/2, count, solved_table);
        }
    }
}

void output(const long long i, const long long j, const long long max) {
            cout << i << " " << j << " " << max << endl;
}

int main() {

    int solved_table[LENGTH];
    for (int x = 0; x < LENGTH; ++x) { solved_table[x] = -1; }

    long long int i, j;
    long long int count, max;
    bool flipped;

    while (cin >> i >> j) {
        max = 0;
        flipped = false; 
        if (i > j) {
            flipped = true;
            long long int t; 
            t = i; i = j; j = t;
        }
        for (long long int k = i; k <= j; ++k) {
            if (k <= LENGTH && solved_table[k] != -1) {
                count = solved_table[k];
            } else {
                count = 0;
                threen(k, count, solved_table);
                if (k <= LENGTH) {
                    solved_table[k] = count;
                }
            }
            if (count > max) max = count;
        }
        if (flipped) {
            output(j, i, max);
        } else {
            output(i, j, max);
        }
    }
    return 0;
}
