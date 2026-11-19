#include <bits/stdc++.h>
using namespace std;

int help(vector<int> &price, int i, int length) {
  if (length == 0 || i < 0) {
    return 0;
  }
  if (length < 0) {
    return INT_MIN;
  }
  int not_take = help(price, i - 1, length);
  int take = price[i] + help(price, i, length - i);
  return max(take, not_take);
}
int cutRod(vector<int> &price) {
  int n = price.size();
  return help(price, n - 1, n);
}

int main() {

  int n;
  cin >> n;
  vector<int> coins(n);
  for (auto &x : coins) {
    cin >> x;
  }

  cout << cutRod(coins);

  return 0;
}
