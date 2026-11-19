#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
int help(vector<int> &dp, vector<int> &coins, int n, int val) {
  if (val == 0)
    return 1;
  if (val < 0)
    return 0;
  if (dp[val] != -1)
    return dp[val];
  int ans = 0;
  for (int x : coins) {
    ans += help(dp, coins, n, val - x) % MOD;
  }

  return dp[val] = ans;
}

int main() {

  int n, x;
  cin >> n;
  cin >> x;
  vector<int> coins(n);
  for (auto &x : coins) {
    cin >> x;
  }
  vector<int> dp(x + 1, -1);

  cout << help(dp, coins, n, x);

  return 0;
}