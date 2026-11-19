#include <iostream>
#include <vector>
using namespace std;

int sumM(vector<vector<int>> &mat, int n, int m, int i = 0, int j = 0) {
  if (i >= n - 1 && j >= m - 1) {
    return mat[i][j];
  }

  if (i == n - 1) {
    return mat[i][j] + sumM(mat, n, m, i, j + 1);
  } else if (j == m - 1) {
    return mat[i][j] + sumM(mat, n, m, i + 1, j);
  }

  return mat[i][j] + max(sumM(mat, n, m, i + 1, j), sumM(mat, n, m, i, j + 1));
}

int main() {

  int n, m;
  cin >> n;
  cin >> m;
  vector<vector<int>> mat;
  for (int i = 0; i < n; i++) {
    mat.push_back({});
    for (int j = 0; j < m; j++) {
      int x;
      cin >> x;
      mat[i].push_back(x);
    }
  }

  cout << sumM(mat, n, m) << endl;

  return 0;
}