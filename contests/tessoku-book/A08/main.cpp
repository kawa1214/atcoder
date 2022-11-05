#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, s, n) for (int i = s; i < (int)(n); i++)

int main()
{
    int H, W;
    cin >> H >> W;

    vector<vector<int>> X(1509, vector<int>(1509, 0));

    for (int h = 1; h <= H; h++)
    {
        for (int w = 1; w <= W; w++)
        {
            cin >> X[h][w];
        }
    }

    vector<vector<int>> sum(1509, vector<int>(1509, 0));

    for (int h = 1; h <= H; h++)
    {
        sum[h][1] = X[h][1];
        for (int w = 2; w <= W; w++)
        {
            sum[h][w] = sum[h][w - 1] + X[h][w];
        }
    }

    for (int w = 1; w <= W; w++)
    {
        for (int h = 2; h <= H; h++)
        {
            sum[h][w] += sum[h - 1][w];
        }
    }
    int Q;
    cin >> Q;

    // 左上(A[q], B[q]), 右下(C[q], D[q])
    vector<int> A(100009, 0), B(100009, 0), C(100009, 0), D(100009, 0);

    rep(i, Q) cin >> A[i] >> B[i] >> C[i] >> D[i];

    rep(q, Q)
    {
        int ans = 0;
        ans += sum[C[q]][D[q]];
        ans += sum[A[q] - 1][B[q] - 1];
        ans -= sum[A[q] - 1][D[q]];
        ans -= sum[C[q]][B[q] - 1];

        cout << ans << endl;
    }

    return 0;
}
