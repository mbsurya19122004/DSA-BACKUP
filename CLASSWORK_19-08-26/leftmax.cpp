#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;

void leftmax(vector<int> &arr, int i = 0) {
  if (i == arr.size()) {
    return;
  }
  if (i == 0) {
    ans.push_back(arr[i]);
  } else if (arr[i] > ans[ans.size() - 1]) {
    ans.push_back(arr[i]);
  } else {
    ans.push_back(ans[ans.size() - 1]);
  }

  leftmax(arr, ++i);
}

int main() {

  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }

  leftmax(arr);
  for (int i : ans) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}