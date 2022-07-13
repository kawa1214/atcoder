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

const long long MOD = 2;

void solve(long long N, std::vector<long long> A)
{
    bool isAllEven = true;
    int min = 100000;
    int ans = 0;

    while (min > 0)
    {
        for (auto &&e : A)
        {
            if (e % 2 || e <= 2)
            {
                break;
            }
            e /= 2;
        }
        ans += 1;
    }

    cout << ans << endl;
}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        std::scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}