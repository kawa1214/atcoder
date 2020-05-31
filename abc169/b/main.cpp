#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <vector>
 
using namespace std;
 
int main() {
    long long n, ans = 1;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for(auto v : a) {
        if(v == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
 
    for(long long i = 0; i < n; i++) {
        if(ans > 1000000000000000000 / a[i]) {
            cout << -1 << endl;
            return 0;
        }
        ans = a[i] * ans;
    }
 
    cout << ans << endl;
 
    return 0;
}