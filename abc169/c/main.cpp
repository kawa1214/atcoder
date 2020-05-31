#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

const int INF = 1001001001;
// 10^ vector: 可変長配列
int main()
{
  long double a, b, ans;

  cin >> a >> b;

  cout << fixed << setprecision(0) <<floor(a*b) <<endl;

  return 0;
}