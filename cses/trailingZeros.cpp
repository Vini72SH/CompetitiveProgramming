#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1618

using namespace std;

int main() {
    long long int n, zeros, mul5;

    cin >> n;
    zeros = 0;
    mul5 = 5;
    while (mul5 <= n) {
        zeros += n / mul5;
        mul5 = mul5 * 5;
    }

    cout << zeros << '\n';
}