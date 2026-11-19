#include <iostream>
using namespace std;

int ans = 0;
void sol(int n) {
  if (n == 0) {

    return;
  }
  int m = n % 10;
  int temp = n;
  while (temp != 0) {
    if (temp % 10 > m)
      m = temp % 10;
    temp /= 10;
  }
  ans++;
  sol(n - m);
}

int main() {
  int n;
  cin >> n;
  sol(n);
  cout << ans;
  return 0;
}
