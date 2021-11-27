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
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

// https://blog.hamayanhamayan.com/entry/2021/10/10/131439
bool win(char a, char b)
{
    if (a == 'G' && b == 'C')
        return true;
    if (a == 'C' && b == 'P')
        return true;
    if (a == 'P' && b == 'G')
        return true;
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int n2 = 2 * n;
    string a[n2];
    rep(i, n2) cin >> a[i];
    vector<P> d(n2);
    rep(i, n2) d[i] = P(0, i);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x = 2 * j, y = 2 * j + 1;
            char xh = a[d[x].second][i], yh = a[d[y].second][i];
            if (win(xh, yh))
                d[x].first--;
            if (win(yh, xh))
                d[y].first--;
        }
        sort(d.begin(), d.end());
    }
    rep(i, n2) cout << d[i].second + 1 << endl;
    return 0;
}