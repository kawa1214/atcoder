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

    vector<ll> cnt(100005, 0);
    ll total = 0;
    rep(i, n)
    {
        int a;
        cin >> a;
        total += a;
        cnt[a]++;
    }

    int q;
    cin >> q;

    rep(i, q)
    {

        int b, c;
        cin >> b >> c;

        if (b != c)
        {
            total -= cnt[b] * b;
            total -= cnt[c] * c;
            cnt[c] += cnt[b];
            cnt[b] = 0;
            total += cnt[b] * b;
            total += cnt[c] * c;
        }
        cout << total << endl;
    }

    return 0;
}
