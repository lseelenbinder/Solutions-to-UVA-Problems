// Name: Luke Seelenbinder
// Username: luke.seelenbinder
// Name: f91
// Progam ID: 10696
// Status: Accepted

#include <iostream>

using namespace std;

int f91(int n) {
    if (n <= 100) {
        return f91(f91(n + 11));
    } else {
        return n - 10;
    }
}

int main() {
    int i;

    cin >> i;
    while (i != 0) {
        cout << "f91(" << i << ") = " << f91(i) << endl;
        cin >> i;
    }

    return 0;
}
