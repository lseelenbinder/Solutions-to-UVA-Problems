#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <math.h>

using namespace std;

int main() {
    int i, k, sum;
    char c;
    stack<char> digits;
    string s;

    while (getline(cin, s)) {
        sum = 0;
        stringstream ss;

        if (s == string("0")) break;
        ss << s;

        while (ss >> c) {
            digits.push(c);
        }

        k = 1;
        while (digits.size()) {
            i = digits.top() - 48;
            sum += i * (pow(2, k) - 1);
            digits.pop();
            ++k;
        }
        cout << sum << endl;
    }

    return 0;
}
