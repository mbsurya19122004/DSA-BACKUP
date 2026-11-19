#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

long long sum = 0;
long long knapsack(int i, vector<int> w, vector<long long> v, int val,
                   vector<vector<long long>> &dp) {
  if (val == 0) {
    return 0;
  }
  if (val < 0 || i < 0)
    return LLONG_MAX;
  if (dp[i][val] != -1)
    return dp[i][val];
  long long not_take = knapsack(i - 1, w, v, val, dp);
  long long take = LLONG_MAX;
  if (v[i] <= val) {
    long long remaining = knapsack(i - 1, w, v, val - v[i], dp);

    if (remaining != LLONG_MAX)
      take = w[i] + remaining;
  }
  return dp[i][val] = min(take, not_take);
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
    sum += v[i];
  }
  vector<vector<long long>> dp =
      vector<vector<long long>>(n, vector<long long>(sum + 1, -1));
  long long ans = 0;
  for (long long i = 0; i <= sum; i++) {
    long long temp = knapsack(n - 1, w, v, i, dp);
    if (temp <= c) {
      ans = i;
    }
  }
  cout << ans << endl;

  return 0;
}