#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> c(N);
    for (int i = 0; i < N; i++) {
        cin >> c[i];
    }

    //Sắp xếp dãy khả năng chi trả
    sort(c.begin(), c.end());

    long long max_money = 0;
    int best_fee = 0;

    //Duyệt qua từng mức học phí
    for (int i = 0; i < N; i++) {
        int fee = c[i]; // mức học phí
        long long money = fee * (N - i); //số tiền kiếm được nếu chọn mức học phí này
        
        //Cập nhật kết quả nếu tổng tiền lớn hơn
        if (money > max_money) {
            max_money = money;
            best_fee = fee;
        }
    }

    //In ra kết quả
    cout << max_money << " " << best_fee << endl;

    return 0;
}
