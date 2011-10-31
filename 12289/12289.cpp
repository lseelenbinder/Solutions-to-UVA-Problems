#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isTwo(string &s) {
    string two = "two";
    return ((s[0] == two[0] && s[1] == two[1]) ||
        (s[1] == two[1] && s[2] == two[2]) ||
        (s[2] == two[2] && s[0] == two[0])
    );
}
int main() {
    vector<string> numbers;
    numbers.push_back(string("one"));
    numbers.push_back(string("two"));
    numbers.push_back(string("three"));

    int n;
    string word;
    cin >> n;
    for (; n > 0; --n) {
        cin >> word;
        switch (word.length()) {
            case 3:
                cout << ((isTwo(word)) ? 2 : 1) << endl;
                break;
            case 5:
                cout << 3 << endl;
        }

    }
    return 0;
}
