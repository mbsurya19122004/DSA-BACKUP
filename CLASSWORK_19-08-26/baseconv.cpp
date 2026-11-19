#include <iostream>
#include <string>
using namespace std;

string bin(int n, string ans = "") {
  if (n == 0) {
    return ans;
  }
  ans.push_back('0' + n % 2);
  return bin(n / 2, ans);
}

string rev(string st) {
  string ans;
  for (int i = st.size() - 1; i >= 0; i--) {
    ans.push_back(st[i]);
  }
  return ans;
}
int main() {

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    string ans = rev(bin(x));
    cout << ans;
    if (i != n - 1) {
      cout << endl;
    }
  }

  cout << endl;
  return 0;
}