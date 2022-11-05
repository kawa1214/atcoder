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
    int N, K;
    cin >> N >> K;

    int ans = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int z = K - i - j;
            if (z >= 1 && z <= N)
            {
                ans += 1;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
