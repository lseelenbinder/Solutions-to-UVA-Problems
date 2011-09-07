// Name: Luke Seelenbinder
// Username: luke.seelenbinder
// Name: 3n+1
// Progam ID: 100
// Status: Accepted

#include <iostream>

using namespace std;

void threen(long long int n, long long int &count) {
    count++;
    if (n == 1) {
        return;
    } else if (n%2 != 0) {
        threen(3*n + 1, count);
    } else {
        threen(n/2, count);
    }
}

void output(long long i, long long j, long long max) {
            cout << i << " " << j << " " << max << endl;
}

int main() {

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
        for (int k = i; k <= j; k++) {
            count = 0;
            threen(k, count);
            if (count > max) max = count;
        }
        if (!flipped) {
            output(i, j, max);
        } else {
            output(j, i, max);
        }

    }
    return 0;
}
