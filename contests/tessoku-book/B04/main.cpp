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
    int N;
    cin >> N;

    int ans = 0, count = 0;

    while (N > 0)
    {
        int sisu = N % 10;
        N = N / 10;
        if (sisu == 1)
        {
            ans += (1 << count);
        }
        count += 1;
    }

    cout << ans << endl;
    return 0;
}
