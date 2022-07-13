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

    int ac = 0, wa = 0, tle = 0, re = 0;

    rep(i, n)
    {
        string s;
        cin >> s;

        if (s == "AC")
        {
            ac++;
        }
        else if (s == "WA")
        {
            wa++;
        }
        else if (s == "TLE")
        {
            tle++;
        }
        else if (s == "RE")
        {
            re++;
        }
    }

    cout << "AC"
         << " x " << ac << endl;
    cout << "WA"
         << " x " << wa << endl;
    cout << "TLE"
         << " x " << tle << endl;
    cout << "RE"
         << " x " << re << endl;

    return 0;
}
