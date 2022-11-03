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
    string s;
    cin >> s;

    int ans = 0;
    rep(i, s.size())
    {
        bool flg = true;
        int now = 0;
        REP(j, i, s.size())
        {

            if (s[j] == 'S')
            {
                flg = false;
            }
            if (flg && s[j] == 'R')
            {
                now++;
            }
        }
        ans = max(ans, now);
    }

    cout << ans << endl;

    return 0;
}
