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
    int D, N;
    cin >> D >> N;

    vector<int> zenzituhi(100009, 0), sum(1000091, 0);

    for (int i = 1; i <= N; i++)
    {
        int l, r;
        cin >> l >> r;
        zenzituhi[l] += 1;
        zenzituhi[r + 1] -= 1;
    }

    sum[0] = 0;
    for (int i = 1; i <= D; i++)
    {
        sum[i] = sum[i - 1] + zenzituhi[i];
    }

    for (int i = 1; i <= D; i++)
    {
        cout << sum[i] << endl;
    }

    return 0;
}
