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
    vector<int> A(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int x = 0; x < N; x++)
    {
        for (int y = x; y < N; y++)
        {
            for (int z = y; z < N; z++)
            {
                if (A[x] + A[y] + A[z] == 1000)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
