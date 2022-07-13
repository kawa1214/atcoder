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

    int k;
    cin >> k;

    int x = 7 % k;

    set<int> s;
    int i = 1;

    while (s.count(x) == 0)
    {
        if (x == 0)
        {
            cout << i << endl;
            return 0;
        }
        s.insert(x);
        x = (x * 10 + 7) % k;
        i++;
    }

    cout << -1 << endl;

    return 0;
}
