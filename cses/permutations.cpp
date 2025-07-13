#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1070

using namespace std;

void inline swap(int v[], int a, int b) {
    int aux;

    aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}

int main() {
    long int n, x;

    cin >> n;
    int v[n];
    if (n == 1) {
        cout << 1 << '\n';
    } else if (n > 3) {
        x = 2;
        for (long int i = 0; i < n / 2; ++i) {
            v[i] = x;
            x += 2;
        }

        x = 1;
        for (long int i = n / 2; i < n; ++i) {
            v[i] = x;
            x += 2;
        }

        for (long int i = 0; i < n; ++i) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    } else {
        cout << "NO SOLUTION\n";
    }

    return 0;
}