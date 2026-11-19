#include <iostream>
using namespace std;

void space(int i, int n) {
    if (i == n)
        return;

    cout << " ";
    space(i + 1, n);
}

void star( int n) {
    if (n==0)
        return;

    cout << "*";
    star(n-1);
}

void pyramid(int n) {
    if (n>=0)
        return;

    star(0, 2 * n + 1);
    space(0, n - i - 1);
    
    cout << endl;

    pyramid(i + 1, n);
}

int main() {
    int n;
    cin >> n;

    pyramid(n-1);

    return 0;
}