#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <stdio.h>

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

void do_line(stringstream*);

int main() {
  string s;
  stringstream ss;

  while (getline(cin, s)) {
    ss.clear();
    ss << s;
    do_line(&ss);
  }

  return 0;
}

void do_line(stringstream* ss) {
    cout << ss << endl;
}
