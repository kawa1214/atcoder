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

void solve(std::vector<long long> x)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 0)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    std::vector<long long> x(5);
    for (int i = 0; i < 5; i++)
    {
        std::scanf("%lld", &x[i]);
    }
    solve(std::move(x));
    return 0;
}