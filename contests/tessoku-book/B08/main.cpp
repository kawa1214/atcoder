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
    int N;
    cin >> N;

    vector<int> X(100009, 0);
    vector<int> Y(100009, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
    }

    int Q;
    cin >> Q;

    vector<int> A(100009, 0), B(100009, 0), C(100009, 0), D(100009, 0);

    for (int q = 0; q < Q; q++)
    {
        cin >> A[q] >> B[q] >> C[q] >> D[q];
    }

    vector<vector<int>> sum(1509, vector<int>(1509, 0));

    for (int i = 0; i < N; i++)
    {
        sum[X[i]][Y[i]] += 1;
    }

    for (int y = 1; y <= 1500; y++)
    {
        for (int x = 2; x <= 1500; x++)
        {

            sum[x][y] += sum[x - 1][y];
        }
    }

    for (int x = 1; x <= 1500; x++)
    {
        for (int y = 2; y <= 1500; y++)
        {

            sum[x][y] += sum[x][y - 1];
        }
    }

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
