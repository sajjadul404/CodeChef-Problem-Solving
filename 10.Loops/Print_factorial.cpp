#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long factorial = 1;
    int i = 1;

    do {
        factorial *= i;
        i++;
    } while (i <= n);

    cout << factorial << endl;

    return 0;
}