#include <iostream>
#include <vector>
using namespace std;

bool rec(vector<long long> &arr, long long target, long long i = 0,
         long long ans = 0) {
  if (i == arr.size()) {
    if (ans == target) {
      return true;
    }
    return false;
  }
  bool a = rec(arr, target, i + 1, ans + arr[i]);
  bool b = i != 0 ? rec(arr, target, i + 1, ans - arr[i]) : false;
  return a || b;
}

int main() {

  long long n, target;
  cin >> n;
  cin >> target;
  vector<long long> arr(n);
  for (long long &x : arr) {
    cin >> x;
  }
  bool ans = rec(arr, target);
  if (ans) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}