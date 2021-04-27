//https://atcoder.jp/contests/apg4b/tasks/APG4b_cj


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
    /*averageがscore配列の各要素より大きければ、残りは自動的に各要素を固定されたaverageで引くことになるからシンプルに else にして
    score.at(i) - averageを出力すれば良き。*/
    else if (average < score.at(i)) {
      cout << score.at(i) - average << endl;
    }
    else {
      cout << 0 << endl;
    }
  }
}


//模範解答
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int N;
//   cin >> N;

//   // N要素の配列
//   vector<int> A(N);

//   // 入力処理
//   for (int i = 0; i < N; i++) {
//     cin >> A.at(i);
//   }

//   // 合計点
//   int sum = 0;

//   // 合計点を計算
//   for (int i = 0; i < N; i++) {

//     // ①ここにプログラムを追記
//     sum += A.at(i);

//   }

//   // 平均点
//   int mean = sum / N;

//   // 平均点から何点離れているかを計算して出力
//   for (int i = 0; i < N; i++) {

//     // ②ここにプログラムを追記
//     // 負の数を出力しないように注意
//     if (A.at(i) > mean) {
//       cout << A.at(i) - mean << endl;
//     }
//     else {
//       cout << mean - A.at(i) << endl;
//     }

//   }

// }
