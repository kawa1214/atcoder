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
    int H, W, N;
    cin >> H >> W >> N;

    vector<int> A(100009, 0), B(100009, 0), C(100009, 0), D(100009, 0);

    rep(i, N)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    vector<vector<int>> b(1509, vector<int>(1509, 0));

    for (int i = 0; i < N; i++)
    {
        b[A[i]][B[i]]++;
        b[A[i]][D[i] + 1]--;
        b[C[i] + 1][B[i]]--;
        b[C[i] + 1][D[i] + 1]++;
    }

    vector<vector<int>> sum(1509, vector<int>(1509, 0));

    for (int i = 0; i <= H; i++)
    {
        sum[i][0] = b[i][0];
    }

    for (int i = 0; i <= W; i++)
    {
        sum[0][i] = b[0][i];
    }

    for (int h = 1; h <= H; h++)
    {
        for (int w = 1; w <= W; w++)
        {
            sum[h][w] = sum[h][w - 1] + b[h][w];
        }
    }

    for (int w = 1; w <= W; w++)
    {
        for (int h = 1; h <= H; h++)
        {

            sum[h][w] = sum[h - 1][w] + sum[h][w];
        }
    }

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cout << sum[i][j];

            if (j == W)
            {
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }

    return 0;
}
