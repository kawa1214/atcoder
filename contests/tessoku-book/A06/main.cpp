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
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);

    rep(i, N)
    {
        cin >> A[i];
    }

    vector<int> sum(N);

    sum[0] = A[0];

    for (int i = 1; i < N; i++)
    {
        sum[i] = sum[i - 1] + A[i];
    }

    rep(q, Q)
    {
        int l, r;
        cin >> l >> r;
        cout << sum[r - 1] - sum[l - 2] << endl;
    }
    return 0;
}
