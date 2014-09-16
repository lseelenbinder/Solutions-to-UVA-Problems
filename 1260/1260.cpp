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
  int t;

  scanf("%d\n", &t);
  for (int i = 0; i < t; ++i) {
    do_line(&ss);
  }

  return 0;
}

void do_line(stringstream* ss) {
  int nA, a, better, total = 0;
  vector<int> as, bs;
  scanf("%d\n", &nA);
  as.reserve(nA);

  for (int i = 0; i < nA; ++i) {
    scanf("%d", &a);
    as.push_back(a);
  }
  scanf("\n");

  for (int i = 1; i < nA; ++i) {
    better = 0;
    for (int j = 0; j < i; ++j) {
      if (as[i] >= as[j]) {
        ++better;
      }
    }
    bs.push_back(better);
  }

  for (int i = 0; i < bs.size(); ++i) {
    total += bs[i];
  }
  cout << total << endl;
}
