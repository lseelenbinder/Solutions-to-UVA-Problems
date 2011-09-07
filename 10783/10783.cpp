// Name: Luke Seelenbinder
// Username: luke.seelenbinder
// Name: Odd Sum
// Progam ID: 10783
// Status: Accepted

#include <iostream>

using namespace std;

int main() {
    int t, a, b;
    int total;

    cin >> t;
    for (int i = 0; i < t; i++) {
        total = 0;
        cin >> a >> b;
        for (int k = a; k <= b; k++) {
            if (k%2) { total += k; }
        }
        cout << "Case " << i + 1 << ": " << total << endl;
    }
    return 0;
}
