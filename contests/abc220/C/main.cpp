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
#include <numeric>
using namespace std;

// 愚直に実装するとTLE
void badSolve(long long N, std::vector<long long> A, long long X)
{
    long long ans = 0;
    long long sum = 0;
    long long i = 0;

    while (true)
    {
        sum = sum + A[i];

        ans += 1;
        i += 1;
        if (i == A.size())
        {
            i = 0;
        }

        if (sum > X)
        {
            cout << ans << endl;
            return;
        }
    }
}

void solve(long long N, std::vector<long long> A, long long X)
{
    long long ans = 0;

    // 数列Aの総和
    long long sum = accumulate(A.begin(), A.end(), static_cast<long long>(0));
    // XをAの総和で割った商
    long long quotient = X / sum;
    // XをAの総和で割った余り
    long long residue = X % sum;

    // 数列Aの各要素を先頭から足していったときの和
    long long total = 0;
    // 和が初めてrを超えたときの項
    long long index = 0;
    for (int i = 0; i < N; i++)
    {
        total += A.at(i);
        index = i + 1;
        if (total > residue)
        {
            break;
        }
    }

    cout << index + quotient * N << endl;
}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        std::scanf("%lld", &A[i]);
    }
    long long X;
    std::scanf("%lld", &X);
    solve(N, std::move(A), X);
    return 0;
}
