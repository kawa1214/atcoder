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

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);

    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    ll t = 0;
    int j = m;
    int ans = 0;

    rep(i, m) t += b[i];
    rep(i, n + 1)
    {
        while (j > 0 && t > k)
        {
            --j;
            t -= b[j];
        }

        if (t > k)
            break;
        ans = max(ans, i + j);

        if (i == n)
            break;

        t += a[i];
    }

    cout << ans << endl;

    return 0;
}
