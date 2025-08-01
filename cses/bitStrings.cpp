#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1617

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    long long n, num = 1;

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        num = (num * 2) % MOD;
    }

    cout << num << '\n';

    return 0;
}