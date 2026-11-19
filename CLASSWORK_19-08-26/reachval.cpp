#include <iostream>
using namespace std;

bool rec(long long n, long long cur = 1) {
  if (cur > n) {
    return false;
  }
  if (n == cur) {
    return true;
  }

  bool a = rec(n, cur * 10);
  bool b = rec(n, cur * 20);
  return a || b;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    bool ans = rec(x);
    if (ans) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}