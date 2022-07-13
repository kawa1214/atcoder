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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, s, n) for (int i = s; i < (int)(n); i++)

int main()
{
    int x, n;
    cin >> x >> n;

    set<int> p;

    rep(i, n)
    {
        int t;
        cin >> t;
        p.insert(t);
    }

    int ans = 0;

    REP(i, 1, 101 + 1)
    {
        if (!p.count(i) && abs(i - x) < abs(ans - x))
        {

            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}
