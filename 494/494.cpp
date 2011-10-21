#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    int total;
    string word;
    while (getline(cin, s)) {
        total = 0;
        word = "";
        for (int i = 0; i < s.length(); ++i) {
            if (isalpha(s[i])) {
                word += s[i];
            } else if (word.length()) {
                word = "";
                ++total;
            }
        }
        if (word.length()) ++total;
        cout << total << endl;
    }
}
