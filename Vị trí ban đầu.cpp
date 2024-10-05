#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> A(n);

    for (int i = 0; i < n; ++i) {
        cin >> A[i].first;
        A[i].second = i + 1;
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < n; ++i) {
        cout << A[i].second << " ";
    }
    cout << endl;

    return 0;
}
