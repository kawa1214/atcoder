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

void solve(long long A, long long B)
{
    if (A == B)
    {
        cout << "1" << endl;
        return;
    }
    long long ans = 32;
    for (int i = 0; i < A - B - 1; i++)
    {
        ans = ans * 32;
    }
    cout << ans << endl;
}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    solve(A, B);
    return 0;
}
