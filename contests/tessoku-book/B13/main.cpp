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

long long N, K;
long long A[100009];
long long S[100009];
long long R[100009];

long long sum(int l, int r)
{
    return S[r] - S[l - 1];
}

int main()
{
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
        cin >> A[i];

    S[0] = 0;
    for (int i = 1; i <= N; i++)
        S[i] = S[i - 1] + A[i];

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
            R[i] = 0;
        else
            R[i] = R[i - 1];
        while (R[i] < N && sum(i, R[i] + 1) <= K)
        {
            R[i] += 1;
        }
    }

    long long Answer = 0;
    for (int i = 1; i <= N; i++)
        Answer += (R[i] - i + 1);
    cout << Answer << endl;

    return 0;
}
