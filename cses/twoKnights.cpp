#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1072

using namespace std;

int main() {
    long long n, i, allPoss, invalidPos, validPos;

    cin >> n;
    for (i = 1; i <= n; ++i) {
        allPoss = ((i * i) * ((i * i) - 1)) / 2;
        invalidPos = 4 * (i - 1) * (i - 2);
        validPos = allPoss - invalidPos;
        cout << validPos << '\n';
    }
}