#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main() {
　//始めの入力：回数と初期値
  int N, A;
  cin >> N >> A;
  
  //繰り返したい回数をrepマクロで作る
  rep(i, N) {

    //四則演算子と数値の入力に対応
    string op;
    int x;
    cin >> op >> x;
    
    //if文で整理。
    if (op=="+") {
      A += x;
    }
    else if (op=="-") {
      A -= x;
    }
    else if (op=="*") {
      A *= x;
    }

    //0で割る場合のみにエラーということはそれ以外計算可能。op=/且つ0ではない数
    else if (op=="/" && x != 0) {
      A /= x;
    }
    else {
      cout << "error" << endl;
      break;
    }
    
    cout << i + 1 << ":" << A <<endl;
  }
  
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
// int main() {
//   int N, A;
//   cin >> N >> A;
//   int sum = A;
  
//   rep(i, N) {
//     string op;
//     int x;
//     cin >> op >> x;
    
//     if (op == "+") {
//         sum += x;
//         cout << i + 1 << ":" << sum << endl;
//     }
//     else if (op == "-") {
//         sum -= x;
//         cout << i + 1 << ":" << sum << endl;
//     }
//     else if (op == "*") {
//         sum *= x;
//         cout << i + 1 << ":" << sum << endl;
//     }
//     else if (op == "/" && x != 0) {
//         sum /= x;
//         cout << i + 1 << ":" << sum << endl;
//     }
//     else {
//         cout << "error" << endl;
//         break;
//     }
//   }
// }