#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

bool jolly(string s) {
    stringstream ss;
    ss << s;
    long long int i, n, k, last;
    ss >> n;
    for (i = 0; i < n; ++i) {
        ss >> k;
        if (i != 0) {
            if (!(abs(k - last) == n-i)) {
                return false;
            }
        }
        last = k;
    }
    return true;
}
int main() {
    string s;
    while (getline(cin, s)) {
        cout << ((jolly(s)) ? "Jolly" : "Not jolly") << endl;
    }

    return 0;
}
