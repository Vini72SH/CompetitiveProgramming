#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1092

using namespace std;

int main() {
    std::vector<long long int> set1, set2;
    long long n, total, partial;
    long long size1, size2;

    cin >> n;
    total = (n * (n + 1)) / 2;
    if (total & 0b1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        partial = total / 2;

        for (int i = n; i > 0; --i) {
            if (partial - i >= 0) {
                partial -= i;
                set1.push_back(i);
            } else {
                set2.push_back(i);
            }
        }

        size1 = set1.size();
        size2 = set2.size();

        cout << size1 << '\n';
        for (int i = 0; i < size1; ++i) {
            cout << set1[i] << ' ';
        }
        cout << '\n';

        cout << size2 << '\n';
        for (int i = 0; i < size2; ++i) {
            cout << set2[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}