// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
// int main() {
//   int a, b;
  
//   cin >> a;
//   cout << "A:";
//   rep(i, a) {
//     cout << "]";
//   }
//   cout << endl; //改行
  
//   cin >> b;
//   cout << "B:";
//   rep(j, b) {
//     cout << "]";
//   }
//   cout << endl; //改行
// }


//整理した場合
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int a, b;
  cin >> a >> b;

  cout << "A:";
  rep(i, a) {
    cout << "]";
  }
  cout << endl; //改行
  
  cout << "B:";
  rep(j, b) {
    cout << "]";
  }
  cout << endl; //改行
}