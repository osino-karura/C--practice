#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
 
  // i,jを0からはじめる
  int i = 0;
  int j = 0;

  // iがA未満の間ループ
  cout << "A:";
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;
  
  // iがB未満の間ループ
  cout << "B:";
  while (j < B) {
    cout << "]";
    j++;
  }
  cout << endl;
  
}

//別解
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int i = 0;
  cout << "A:";
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;

  i = 0; 　//iの初期化
  cout << "B:";
  while (i < B) {
    cout << "]";
    i++;
  }
  cout << endl;
}
