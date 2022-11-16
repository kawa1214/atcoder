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
#include <iomanip>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, s, n) for (int i = s; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    double left = 0, right = 100, mid;
    rep(i, 100)
    {
        mid = (left + right) / 2.0;
        double val = mid * mid * mid + mid;

        if (val > 1.0 * N)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    cout << fixed << setprecision(6) << mid << endl;

    return 0;
}
