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
    ll N, K;
    cin >> N >> K;

    vector<ll> A(100009);

    rep(i, N) cin >> A[i];

    ll left = 1, right = 1000000000;
    while (left < right)
    {
        ll mid = (left + right) / 2;
        ll sum = 0;
        rep(i, N) sum += mid / A[i];
        if (sum >= K)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << left << endl;
    return 0;
}
