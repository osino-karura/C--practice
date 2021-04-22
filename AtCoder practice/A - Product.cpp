//Even と Odd の入力が逆に最後まで気づかなかった。もったいない！
//問題文の通りに入力する。


#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  if ((a * b) % 2 == 0) {
    cout << "Even" << endl;
  }
  else {
    cout << "Odd" << endl;
  }
}