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

    vector<ll> l(n);
    rep(i, n) cin >> l[i];

    sort(all(l));
    int ans = 0;
    rep(a, n)
    {
        REP(b, a + 1, n)
        {
            if (l[a] == l[b])
                continue;
            REP(c, b + 1, n)
            {
                if (l[a] == l[c] || l[b] == l[c])
                    continue;

                if (l[a] + l[b] > l[c])
                    ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
