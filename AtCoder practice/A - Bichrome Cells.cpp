// N×N のマス目があります。
// このマス目の各マスを白色または黒色に塗ることにしました (すべてのマスをどちらか片方の色に塗ります)。
// ちょうど Aマスを白色に塗るとき、黒色に塗ることになるマスはいくつあるでしょうか。

// 制約
// 1≦N≦100
// 0≦A≦N**2


#include <bits/stdc++.h>
using namespace std;

int main() {
  double r;
  double g;
  cin >> r; // r = cin
  cin >> g; // g = cin
  cout << (g * 2) - r << endl;
}