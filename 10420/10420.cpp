#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> countries;
    string s;
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        countries[s]++;
        getline(cin, s);
    }

    map<string, int>::iterator it = countries.begin();
    for (; it != countries.end(); ++it) {
        cout << (*it).first << ' ' << (*it).second << endl;
    }
    return 0;
}
