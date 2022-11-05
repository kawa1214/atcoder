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
    vector<int> A(N);

    cin >> N;
    rep(i, N) cin >> A[i];

    vector<int> atari(N + 1, 0);
    vector<int> hazure(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        if (A[i - 1] == 1)
        {
            atari[i] = atari[i - 1] + 1;
            hazure[i] = hazure[i - 1];
        }
        else
        {
            atari[i] = atari[i - 1];
            hazure[i] = hazure[i - 1] + 1;
        }
    }

    int Q;
    cin >> Q;

    rep(i, Q)
    {
        int l, r;
        cin >> l >> r;
        int aSum = atari[r] - atari[l - 1];
        int hSum = hazure[r] - hazure[l - 1];

        if (aSum == hSum)
        {
            cout << "draw" << endl;
        }
        else if (aSum > hSum)
        {
            cout << "win" << endl;
        }
        else
        {
            cout << "lose" << endl;
        }
    }
    return 0;
}
