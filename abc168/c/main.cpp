// https://atcoder.jp/contests/apg4b/tasks/APG4b_ac

#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
#include <iomanip>
#include <math.h>
using ll = long long;

using namespace std;

const double PI = acos(-1);

//ans = sqrt(a*a + b*b);

int main()
{
	int a, b, h, m;
	cin >> a >> b >> h >> m;

	// 0時0分からのthetaを求める
	double th, tm;

	// もとがintなので，小数型にしないと割れない
	th = double(h*60+m)/720 * 2*PI;
	tm = double(m)/60 * 2*PI;

	// 座標を求める
	double xh, yh,  xm, ym;
	xh = a*cos(th);
	yh = a*sin(th);
	xm = b*cos(tm);
	ym = b*sin(tm);

	// 点a,bを対称にした四角形を作る，その辺の長さ(差)を求める
	double dx, dy;
	dx = xh-xm; 
	dy = yh-ym;

	double ans;
	ans = sqrt(dx*dx + dy*dy);

	cout << fixed << setprecision(10) << ans << endl;

	return 0;
}
