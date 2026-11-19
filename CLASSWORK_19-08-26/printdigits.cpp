#include <iostream>
using namespace std;

void dig(int n) {
  if (n == 0) {
    return;
  }
  dig(n / 10);
  cout << n % 10 << " ";
}

int main() {

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 0) {
      cout << "0";
    }
    dig(x);
    cout << endl;
  }

  return 0;
}