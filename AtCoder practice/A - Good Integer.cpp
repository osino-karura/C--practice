//int型で攻めたらよくわからない。
//string型で文字列化し、各要素が連続した文字か否かで場合分けする
//少なくとも3つ以上の数字が連続していればいいから4つ連続は条件に入れなくても大丈夫。
//Yes or Noの文字列化で""を忘れていたから気を付ける。
//int型の時が全く理解できない。


#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  
  if (n[0] == n[1] && n[1] == n[2]) {
    cout << "Yes" << endl;
  }
  else if (n[1] == n[2] && n[2] == n[3]) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}