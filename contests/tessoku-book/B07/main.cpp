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
    int T, N;
    cin >> T >> N;

    vector<int> L(500009, 0), R(500009, 0);

    rep(i, N) cin >> L[i] >> R[i];

    // 0, 1, 3, 4, ..., 24
    //

    vector<int> B(500009, 0);
    for (int i = 0; i < N; i++)
    {
        B[L[i]] += 1;
        B[R[i]] -= 1;
    }

    vector<int> sum(500009, 0);

    sum[0] = B[0];

    for (int i = 1; i <= T; i++)
    {
        sum[i] = sum[i - 1] + B[i];
    }

    rep(i, T)
    {
        cout << sum[i] << endl;
    }
    return 0;
}
