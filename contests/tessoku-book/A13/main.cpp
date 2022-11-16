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

    vector<int> A(10000009), R(10000009);

    for (int i = 1; i <= N; i++)
        cin >> A[i];

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            R[i] = 1;
        }
        else
        {
            R[i] = R[i - 1];
        }

        while (R[i] < N && A[R[i] + 1] - A[i] <= K)
            R[i] += 1;
    }

    ll ans = 0;

    for (int i = 0; i < N; i++)
    {
        ans += (R[i] - i);
    }

    cout << ans << endl;

    return 0;
}
