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
    int A[1000009], B[1000009];

    for (int i = 1; i <= N; i++)
        cin >> A[i];

    vector<int> T;
    for (int i = 1; i <= N; i++)
    {
        T.push_back(A[i]);
    }
    sort(T.begin(), T.end());

    T.erase(unique(T.begin(), T.end()), T.end());

    for (int i = 1; i <= N; i++)
    {
        B[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
        B[i] += 1;
    }

    for (int i = 1; i <= N; i++)
    {
        if (i >= 2)
            cout << " ";
        cout << B[i];
    }

    cout << endl;
    return 0;
}
