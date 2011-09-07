// Name: Luke Seelenbinder
// Username: luke.seelenbinder
// Name: Hashmat the Brave Warrior
// Progam ID: 10055
// Status: Accepted

#include <iostream>

using namespace std;

int main() {
    long long int i, j;
    while (cin >> i >> j) {
        if (i > j) {
            cout << i - j << endl;
        } else {
            cout << j - i << endl;
        }
    }
    return 0;
}
