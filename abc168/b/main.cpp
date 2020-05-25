// https://atcoder.jp/contests/apg4b/tasks/APG4b_ac

#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
using namespace std;

int main()
{
	string s;
	int k;
	cin >> k >> s;

	if (s.size() <= k){
		cout << s << endl;
	} else {
		cout << s.erase(k) << "..." << endl;
	}

	return 0;
}
