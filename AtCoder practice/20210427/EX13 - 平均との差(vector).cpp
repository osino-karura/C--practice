#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  //入力した配列の合計
  vector<int> score(N);
  
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> score.at(i);
    sum += score.at(i);
  }
//   cout << sum << endl;
  
  //平均点（小数点切り捨て）
  int average = sum / N;
//   cout << average << endl;
  
  //各点数と平均点との差
  for (int i = 0; i < N; i++) {
    if (average > score.at(i)) {
      cout << average - score.at(i) << endl;
    }
    else if (average < score.at(i)) {
      cout << score.at(i) - average << endl;
    }
    else {
      cout << 0 << endl;
    }
  }
}