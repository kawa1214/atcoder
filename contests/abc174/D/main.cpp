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
    string s;
    cin >> n >> s;

    int a = 0, b = 0;
    rep(i, n)
    {
        if (s[i] == 'R')
            ++a;
    }
    int ans = max(a, b);
    rep(i, n)
    {
        if (s[i] == 'R')
        {
            --a;
        }
        else
        {
            ++b;
        }
        int now = max(a, b);
        ans = min(ans, now);
    }

    cout << ans << endl;

    return 0;
}
