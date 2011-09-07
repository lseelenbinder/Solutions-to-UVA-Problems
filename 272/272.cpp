// Name: Luke Seelenbinder
// Username: luke.seelenbinder
// Name: TEX Quotes
// Progam ID: 272
// Status: Accepted

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string full;
    string s;
    stringstream ss;

    while (getline(cin, s)) { full.append(s + "\n"); }

    bool first = true;
    for (int k = 0; k < full.length(); k++) {
        if (full[k] == '"') {
            if (first) {
                ss << "``";
                first = false;
            } else {
                ss << "''";
                first = true;
            }
        } else {
            ss << full[k];
        }
    }

    cout << ss.str();

    return 0;
}
