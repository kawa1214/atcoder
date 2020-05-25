#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
        A[i]--;  // 0-indexed に変更
    }
    int logK = 1;
    while ((1ll << logK) < K) logK++;
    // doubling[k][i] : i番目から 2^k 進んだ町
    vector<vector<int> > doubling(logK, vector<int>(N));
    for (int i = 0; i < N; i++) {
        doubling[0][i] = A[i];
    }
    // 前処理 doubling の計算
    for (int k = 0; k < logK - 1; k++) {
        for (int i = 0; i < N; i++) {
            doubling[k + 1][i] = doubling[k][doubling[k][i]];
            cout << doubling[k+1][i] <<endl;
        }
    }
    int now = 0;
    for (int k = 0; K > 0; k++) {
        if (K & 1) now = doubling[k][now];
        K = K >> 1;
    }
    cout << now + 1 << endl;
}
