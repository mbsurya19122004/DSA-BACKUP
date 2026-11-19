#include <iostream>
using namespace std;

void space(int i, int n) {
    if (i == n)
        return;

    cout << " ";
    space(i + 1, n);
}

void star(int i, int n) {
    if (i == n)
        return;

    cout << "*";
    star(i + 1, n);
}

void pyramid(int i, int n) {
    if (i == n)
        return;

    space(0, n - i - 1);
    star(0, 2 * i + 1);
    cout << endl;

    pyramid(i + 1, n);
}

int main() {
    int n;
    cin >> n;

    pyramid(0, n);

    return 0;
}