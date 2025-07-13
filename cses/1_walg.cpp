#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1068

using namespace std;

int main() {
    long int n;

    cin >> n;
    while (n > 1) {
        cout << n << ' ';
        if (n & 0b1) {
            n = (n * 3) + 1;
        } else {
            n = n >> 1;
        }
    }
    cout << 1 << '\n';
}