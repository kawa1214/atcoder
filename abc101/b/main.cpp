#include <iostream>
using namespace std;

int dsum (int N) {
  int ret = 0;

  while (N>0){
    ret += N % 10;
    N /= 10;
  }
  
  return ret;
}

int main() {
  int N;
  cin >> N;

  int d = dsum(N);

  if (N % d == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
