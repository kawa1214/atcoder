#include <iostream>
using namespace std;
 
int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;
 
  int CARD[3] = {1, 0, -1};
 
  int ans = 0;
 
  if(K < A) {
    cout << K << endl;
    return 0;
  }
  if(K <= A+B) {
    cout << A << endl;
    return 0;
  }
  cout << A - (K-A-B) << endl;
  return 0;
}