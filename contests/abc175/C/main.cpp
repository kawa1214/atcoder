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
    ll x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    ll ans;
    if (x / d > k)
    {
        ans = x - d * k;
    }
    else
    {
        ll e = x / d;
        k -= e;
        x -= e * d;

        if (k % 2 == 1)
        {
            x = abs(x - d);
        }

        ans = x;
    }

    cout << ans << endl;
    return 0;
}
