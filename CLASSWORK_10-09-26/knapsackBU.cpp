
#include <bits/stdc++.h>
using namespace std;

long long knapsack(int n, vector<int> w, vector<long long> v, int cap) {
  vector<vector<long long>> dp(n + 1, vector<long long>(cap + 1, 0));

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < cap + 1; j++) {
      dp[i][j] = max(dp[i - 1][j],
                     w[i - 1] <= j ? v[i - 1] + dp[i - 1][j - w[i - 1]] : 0);
    }
  }
  return dp[n][cap];
}

int main() {
  int n, c;
  cin >> n;
  cin >> c;
  vector<int> w(n);
  vector<long long> v(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
    cin >> v[i];
  }

  cout << knapsack(n, w, v, c) << endl;

  return 0;
}