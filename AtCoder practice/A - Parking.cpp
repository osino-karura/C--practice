//問題文の順序通りに書いた。
//簡単だった。

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  
  if (n * a < b) {
    cout << n * a << endl;
  }
  else if (n * a > b) {
    cout << b << endl;
  }
  else {
    cout << n * a << endl;
  }
}