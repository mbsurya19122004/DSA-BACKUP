#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  int n, c, sum = 0;
  cin >> n;
  cin >> c;

  vector<int> w(n);
  vector<long long> v(n);

  for (int i = 0; i < n; i++) {
    cin >> w[i];
    cin >> v[i];
    sum += v[i];
  }
  vector<vector<long long>> dp =
      vector<vector<long long>>(n, vector<long long>(sum + 1, LLONG_MAX));
  for (int i = 0; i < n; i++) {
    dp[i][0] = 0;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= sum; j++) {
      if (i > 0)
        dp[i][j] = dp[i - 1][j];

      if (j >= v[i]) {

        long long previous;

        if (i == 0)
          previous = (j == v[i] ? 0 : LLONG_MAX);
        else
          previous = dp[i - 1][j - v[i]];

        if (previous != LLONG_MAX) {
          dp[i][j] = min(dp[i][j], previous + w[i]);
        }
      }

      if (dp[i][j] <= c) {
        ans = max(ans, (int)j);
      }
    }
  }

  cout << ans << endl;
}