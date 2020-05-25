// https://atcoder.jp/contests/apg4b/tasks/APG4b_ac

#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> s(10);

	s[0] = "pon";
	s[1] = "pon";
	s[3] = "hon";
	s[4] = "hon";
	s[5] = "hon";
	s[6] = "pon";
	s[7] = "hon";
	s[8] = "pon";
	s[9] = "hon";

	cout << s[n%10] << enel;

	return 0;
}
