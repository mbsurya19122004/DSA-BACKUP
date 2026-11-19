#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int help(vector<int> &pages, vector<int> &prices, int val, int no_pages = 0,
         int i = 0) {
  if (val < 0) {
    return INT_MIN;
  }
  if (val == 0) {
    ans = max(ans, )
  }
}

int main() {

  int n, x;
  cin >> n;
  cin >> x;
  vector<int> pages(n), prices(n);
  for (int i = 0; i < n; i++) {
    cin >> prices[i];
    cin >> pages[i];
  }

  return 0;
}