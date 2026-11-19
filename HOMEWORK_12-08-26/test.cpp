#include <iostream>
using namespace std;

int main() {
  for (int i = 0, j = 0; i < 3 and j < 4; i == j ? i++ : j++) {
    cout << "i=" << i << endl;
    cout << "j=" << j << endl;
  }
  return 0;
}