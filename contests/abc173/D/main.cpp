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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    sort(a.rbegin(), a.rend());

    ll ans = 0;

    int t = n - 1;

    rep(i, n)
    {
        int lim = 2;
        if (i == 0)
            lim = 1;
        rep(j, lim)
        {
            if (t > 0)
            {
                ans += a[i];
                t--;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
