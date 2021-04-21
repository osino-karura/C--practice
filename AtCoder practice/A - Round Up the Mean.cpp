// 2つの正整数 a, bが与えられます。 
// a, bの平均値を xとします。 
// xの小数点以下を切り上げて得られる整数を出力してください。

// 制約
// a, bは整数である。//整数だからint型にする
// 1≤a,b≤100


#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  int s;
  cin >> a >> b;
  s = a + b;
  cout << (s + 2 - 1) / 2 << endl;
}
