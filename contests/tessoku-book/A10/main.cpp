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
    vector<int> A(109, 0);
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    int D;
    cin >> D;
    vector<int> L(109, 0), R(109, 0);

    for (int i = 1; i <= N; i++)
        cin >> L[i] >> R[i];

    vector<int> P(100009, 0);

    P[1] = A[1];

    for (int i = 2; i <= N; i++)
        P[i] = max(P[i - 1], A[i]);

    vector<int> Q(100009, 0);
    for (int i = N - 1; i >= 1; i--)
        Q[i] = max(Q[i + 1], A[i]);

    for (int d = 1; d <= D; d++)
    {
        cout << max(P[L[d] - 1], Q[R[d] + 1]) << endl;
    }

    return 0;
}
