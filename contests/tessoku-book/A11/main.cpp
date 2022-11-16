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
    int N, X;
    cin >> N >> X;

    vector<int> A(100009);

    rep(i, N) cin >> A[i];

    int L = 0, R = N - 1;
    while (L <= R)
    {
        int M = (L + R) / 2;
        if (X < A[M])
        {
            R = M - 1;
        }
        if (X == A[M])
        {
            cout << M + 1 << endl;
            return 0;
        }
        if (X > A[M])
        {
            L = M + 1;
        }
    }
    return 0;
}
