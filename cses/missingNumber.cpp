#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1083

using namespace std;

int main() {
    long int n, cont, number;
    long int numberSum, totalSum, diff;

    cont = 1;
    cin >> n;
    numberSum = totalSum = 0;
    for (int i = 1; i < n; i++) {
        cin >> number;
        numberSum += number;
        totalSum += cont;
        cont++;
    }

    totalSum += n;
    diff = totalSum - numberSum;
    cout << diff << '\n';

    return 0;
}