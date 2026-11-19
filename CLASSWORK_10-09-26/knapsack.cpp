#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> dp;
long long knapsack(int i, vector<int> w, vector<long long> v, int cap) {
  if (i < 0 || cap == 0)
    return 0;
  if (dp[i][cap] != -1)
    return dp[i][cap];
  long long take = 0;
  if (cap >= w[i])
    take = v[i] + knapsack(i - 1, w, v, cap - w[i]);
  long long not_take = knapsack(i - 1, w, v, cap);

  return dp[i][cap] = max(take, not_take);
}

int main() {
  int n, c;
  cin >> n;
  cin >> c;
  dp = vector<vector<long long>>(n, vector<long long>(c + 1, -1));
  vector<int> w(n);
  vector<long long> v(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
    cin >> v[i];
  }

  cout << knapsack(n - 1, w, v, c) << endl;

  return 0;
}