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
vector<long long> Enumerate(vector<long long> A)
{
    vector<long long> SumList;
    for (int i = 0; i < (1 << A.size()); i++)
    {
        long long sum = 0; // 現在の合計値
        for (int j = 0; j < A.size(); j++)
        {
            int wari = (1 << j);
            if ((i / wari) % 2 == 1)
                sum += A[j];
        }
        SumList.push_back(sum);
    }
    return SumList;
}

ll N, K;
ll A[30];
int main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    // カードを半分ずつに分ける
    vector<long long> L1, L2;
    for (int i = 1; i <= N / 2; i++)
        L1.push_back(A[i]);
    for (int i = N / 2 + 1; i <= N; i++)
        L2.push_back(A[i]);
    // それぞれについて、「あり得るカードの合計」を全列挙
    vector<long long> Sum1 = Enumerate(L1);
    vector<long long> Sum2 = Enumerate(L2);
    sort(Sum1.begin(), Sum1.end());
    sort(Sum2.begin(), Sum2.end());
    // 二分探索で Sum1[i] + Sum2[j] = K となるものが存在するかを見つける
    for (int i = 0; i < Sum1.size(); i++)
    {
        int pos = lower_bound(Sum2.begin(), Sum2.end(), K - Sum1[i]) - Sum2.begin();
        if (pos < Sum2.size() && Sum2[pos] == K - Sum1[i])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
