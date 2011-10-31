#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int main() {
    char c;
    stack<char> word;
    string s;

    while (getline(cin, s)) {
        stringstream ss;
        ss << s;
        while (ss.get(c)) {
            switch (c) {
                case ' ':
                    while (!word.empty()) {
                        cout << word.top();
                        word.pop();
                    }
                    cout << ' ';
                    break;
                default:
                    word.push(c);
                    break;
            }
        }
        if (!word.empty()) {
            while (!word.empty()) {
                cout << word.top();
                word.pop();
            }
        }
        cout << endl;
    }
    return 0;
}
