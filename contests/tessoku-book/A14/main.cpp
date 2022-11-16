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
    int N, K;
    cin >> N >> K;
    int A[1009], B[1009], C[1009], D[1009];
    int P[1000009], Q[1000009];

    for (int i = 1; i <= N; i++)
        cin >> A[i];
    for (int i = 1; i <= N; i++)
        cin >> B[i];
    for (int i = 1; i <= N; i++)
        cin >> C[i];
    for (int i = 1; i <= N; i++)
        cin >> D[i];

    for (int x = 1; x <= N; x++)
    {
        for (int y = 1; y <= N; y++)
        {
            P[(x - 1) * N + y] = A[x] + B[y];
        }
    }
    for (int z = 1; z <= N; z++)
    {
        for (int w = 1; w <= N; w++)
        {
            Q[(z - 1) * N + w] = C[z] + D[w];
        }
    }

    sort(Q + 1, Q + (N * N) + 1);

    for (int i = 1; i <= N * N; i++)
    {
        int pos1 = lower_bound(Q + 1, Q + (N * N) + 1, K - P[i]) - Q;
        if (pos1 <= N * N && Q[pos1] == K - P[i])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
