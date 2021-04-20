すぬけ君は 1,2,3の番号がついた 3つのマスからなるマス目を持っています。 
各マスには 0 か 1 が書かれており、マス iには siが書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。

制約
s1,s2,s3は 1 あるいは 0


#include <iostream>
#include <string>
using namespace std;
int ans;
string s;
int main(){
    cin >> s;
    if(s[0]=='1') ans++;
    if(s[1]=='1') ans++;
    if(s[2]=='1') ans++;
    cout << ans << endl;
}