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

class Maker {
  public:
    string name;
    ull low;
    ull high;
};

int main() {
  string s;
  stringstream ss;
  int test_cases, d, q, p, i, k;
  ull low, high;
  string name;
  Maker m;
  vector<Maker> makers;
  vector<Maker>::iterator it;

  scanf("%d\n", &test_cases);

  for (k = 0; k < test_cases; ++k) {
    if (k != 0) cout << endl;
    makers.clear();
    scanf("%d\n", &d);

    // build database
    for (i = 0; i < d; ++i) {
      getline(cin, s);
      ss.clear();
      ss << s;
      ss >> name >> low >> high;
      m.name = name; m.low = low; m.high = high;
      makers.push_back(m);
    }

    scanf("%d\n", &q);

    for (i = 0; i < q; ++i) {
      scanf("%d\n", &p);
      it = makers.begin();
      name = "";
      while (it != makers.end()) {
        if (p >= it->low && p < it->high) {
          if (name == "") {
            name = it->name;
          } else {
            name = "UNDETERMINED";
            break;
          }
        }
        ++it;
      }
      if (name == "") {
        name = "UNDETERMINED";
      }
      cout << name << endl;
    }
  }

  return 0;
}
