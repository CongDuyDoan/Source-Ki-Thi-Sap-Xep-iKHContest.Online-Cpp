#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    int sum_digits = 0;
    bool has_zero = false;

    for (char c : N) {
        sum_digits += (c - '0');
        if (c == '0') has_zero = true;
    }

    if (!has_zero || sum_digits % 3 != 0) {
        cout << -1 << endl;
        return 0;
    }
    
    sort(N.begin(), N.end(), greater<char>());
    cout << N << endl;

    return 0;
}
