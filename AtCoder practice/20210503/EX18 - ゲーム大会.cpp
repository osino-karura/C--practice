//https://atcoder.jp/contests/apg4b/tasks/APG4b_ce

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // STEP1: (ここで"試合結果の表"の2次元配列を宣言)
  // char型 かつ　'-' で初期化（全て'-'で統一）。
  // ex) 3 2 => N人参加 M試合
  //     1 2
  //     3 1
  // {-, -, -}
  // {-, -, -}
  // {-, -, -}
  vector<vector<char>> table(N, vector<char>(N, '-'));
  
  // STEP3: ○, ×の定義をする。
  // しかし、入力されている値は一戦目（一行目）二戦目(二行目)・・・の数え方だから
  // 配列として格納した値を多次元配列に対応させる必要がある。
  for (int i = 0; i < M; i++) {
    A.at(i)--; B.at(i)--;
    table.at(A.at(i)).at(B.at(i)) = 'o'; //(1-1, 2-1) (3-1, 1-1)　=> (0, 1) (2, 0)
    table.at(B.at(i)).at(A.at(i)) = 'x'; //逆
  }
  
  // STEP2：出力条件からイメージして先に書く。
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << table.at(i).at(j);
      if (j == N - 1) {
        cout << endl;
      }
      else {
        cout << " ";
      }
    }
  }
}
