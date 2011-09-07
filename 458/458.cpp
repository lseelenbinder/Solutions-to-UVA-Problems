// Name: Luke Seelenbinder
// Username: luke.seelenbinder
// Name: The Decoder
// Progam ID: 458
// Status: Accepted

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
    char str[1001];

    while (cin.getline(str, 1001)) {
        if (strlen(str) != 0) {
            for (int k = 0; k < strlen(str); k++) {
                putchar(str[k]-7);
            }
            cout << endl;
        }
    }

    return 0;
}
