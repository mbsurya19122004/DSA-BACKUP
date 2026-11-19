#include <bits/stdc++.h>
using namespace std;

int main() {
  const int MOD = 1000000007;
  int n, x;
  cin >> n;
  cin >> x;
  vector<int> coins(n);
  for (auto &x : coins) {
    cin >> x;
  }
  vector<int> dp(x + 1, 0);
  dp[0] = 1;

  for (int j : coins) {
    for (int i = 1; i <= x; i++) {
      int val = i - j;
      if (val >= 0) {
        dp[i] = (dp[i] + dp[val]) % MOD;
      }
    }
  }
  cout << dp[x] << endl;
  return 0;
}