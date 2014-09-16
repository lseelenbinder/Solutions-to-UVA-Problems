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

void do_line(stringstream*, int, int);

int main() {
  string s;
  stringstream ss;
  int f, r;

  while (getline(cin, s)) {
    ss.clear();
    ss << s;
    ss >> f;
    if (f == 0) break;
    ss >> r;
    do_line(&ss, f, r);
  }

  return 0;
}

void do_line(stringstream* ss, int f, int r) {
  vector<int> fronts, rears;
  priority_queue<float, vector<float>, less<float> > ratios, ratio_diffs;
  vector<float>::iterator it;
  int i, j;
  float ratio, last;

  int t;
  for (i = 0; i < f; ++i) {
    scanf("%d", &t);
    fronts.push_back(t);
  }
  scanf("\n");
  for (i = 0; i < r; ++i) {
    scanf("%d", &t);
    rears.push_back(t);
  }

  for (i = 0; i < fronts.size(); ++i) {
    for (j = 0; j < rears.size(); ++j) {
      ratio = (float) rears[j] / (float) fronts[i];
      ratios.push(ratio);
    }
  }
  scanf("\n");

  deque<float> ratios_r;
  while (!ratios.empty()) {
    ratios_r.push_front(ratios.top());
    ratios.pop();
  }

  last = ratios_r[0];
  for (i = 1; i < ratios_r.size(); ++i) {
    ratio = ratios_r[i];
    ratio_diffs.push(ratio / last);
    last = ratio;
  }
  printf("%0.02f\n", ratio_diffs.top());
}
