#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string s;
    vector<bool> jolly;
    vector<bool>::iterator it;
    bool isJolly;

    long long int i, n, k, last;
    stringstream ss;

    while (getline(cin, s)) {
        ss.clear();

        ss << s;
        ss >> k;

        jolly.resize(k, false);
        for (it = jolly.begin(); it != jolly.end(); ++it) *it = false;

        jolly[0] = true;

        ss >> n;
        last = n;
        while (ss >> n) {
          i = abs(last - n);
          if (i < k) {
            jolly[i] = true;
          }
          last = n;
        }

        it = jolly.begin();
        while (it != jolly.end()) {
          if (!*it) {
            cout << "Not jolly" << endl;
            break;
          }
          ++it;
        }

        if (it == jolly.end()) {
          cout << "Jolly" << endl;
        }
    }

    return 0;
}

