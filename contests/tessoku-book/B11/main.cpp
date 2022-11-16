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
    vector<int> A(100009, 0);
    rep(i, N) cin >> A[i];

    sort(A.begin(), A.begin() + N);

    int Q;
    vector<int> X(100009, 0);
    cin >> Q;

    rep(i, Q) cin >> X[i];

    rep(i, Q)
    {
        int pos = lower_bound(A.begin(), A.begin() + N, X[i]) - A.begin();
        cout << pos << endl;
    }

    return 0;
}
