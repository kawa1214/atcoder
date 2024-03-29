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

const string YES = "Yes";
const string NO = "No";
/*
グラフ理論 → 頂点を辺で結ぶ
辺 → 頂点-1
M    N

- 木
- スター
    - 一つの点から他の点が伸びている
    - 次数 ある頂点につながっている点の数
    - 次数がn-1の頂点があればスターグラフ
*/

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long n;
    cin >> n;
    vector<long long> count(n + 1);

    for (long long i = 1; i <= n - 1; i++)
    {
        long long a, b;
        cin >> a >> b;
        count[a]++;
        count[b]++;
    }
    for (long long i = 1; i <= n; i++)
    {
        if (count[i] == n - 1)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
