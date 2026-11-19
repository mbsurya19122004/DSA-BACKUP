#include <iostream>
#include <vector>
using namespace std;

bool pali(string &s, int i, int j) {
  while (i < j) {
    if (s[i] != s[j]) {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

void print_slice(string &s, int i, int j) {
  while (i <= j) {
    cout << s[i];
    i++;
  }
  cout << endl;
}

int help(string &s) {
  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    for (int j = i; j < s.size(); j++) {
      if (pali(s, i, j)) {
        ans++;
        print_slice(s, i, j);
      }
    }
  }
  return ans;
}

int help2(vector<vector<int>> &dp, string &s, int i, int j) {
  if (i == s.size()) {
    return 0;
  }

  if (j == s.size()) {
    return help2(dp, s, i + 1, i + 1);
  }
  if (dp[i][j] != -1) {
    return dp[i][j];
  }
  int res = help2(dp, s, i, j + 1);
  if (pali(s, i, j)) {
    return dp[i][j] = 1 + res;
  }
  return dp[i][j] = res;
}

int help3(string &s) {
  int n = s.size();
  vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
  for (int i = n - 1; i >= 0; i--) {
    for (int j = n - 1; j >= i; j--) {

      if (j + 1 >= n) {
        dp[i][j] = dp[i + 1][i + 1];
      }

      dp[i][j] += dp[i][j + 1];

      if (pali(s, i, j)) {
        dp[i][j]++;
      }
    }
  }
  return dp[0][0];
}

int main() {

  string s;
  cin >> s;
  int n = s.size();
  vector<vector<int>> dp(n, vector<int>(n, -1));
  int ans = help3(s);
  cout << ans;

  return 0;
}