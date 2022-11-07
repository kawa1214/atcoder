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
    ll N;
    cin >> N;
    ll original = 0;
    vector<ll> P(N);
    for (ll i = 0; i < N; i++)
    {
        ll p;
        cin >> p;
        P[i] = p;
        cout << P[i] << " : " << p * pow(10, N - i - 1) << endl;
        original += p * pow(10, N - i - 1);
    };

    cout << "original" << original << endl;

    sort(P.begin(), P.end());

    vector<int> K;
    int pLen = 0;
    int ansPLen = 0;

    int beforeP = 0;
    int currentP = 0;

    do
    {
        int currentP = 0;
        for (int i = 0; i < N; i++)
        {
            K.push_back(P[i]);
            // cout << P[i];

            currentP += P[i] * pow(10, N - i - 1);
            pLen += 1;

            // pow(10, i);
        }
        // cout << endl;

        // cout << "check : " << check << " original : " << original << endl;

        if (currentP == original)
        {
            // cout << "currentP" << currentP << endl;
            string d = to_string(beforeP);
            rep(i, N)
            {
                if (i == N - 1)
                {
                    cout << d[i] << endl;
                }
                else
                {
                    cout << d[i] << " ";
                }
            }
            // cout << beforeP << endl;
            return 0;
        }
        else
        {
            beforeP = currentP;
        }
        // cout << endl;
    } while (next_permutation(P.begin(), P.end()));

    // cout << ansPLen << "ans" << endl;
    // rep(i, N)
    // {
    //     int l = ansPLen - N - N + i;
    //     // cout << l << ":";
    //     cout << K[l];
    //     if (i == N - 1)
    //     {
    //         cout << endl;
    //     }
    //     else
    //     {
    //         cout << " ";
    //     }
    // }
    // cout << endl;
    return 0;
}
