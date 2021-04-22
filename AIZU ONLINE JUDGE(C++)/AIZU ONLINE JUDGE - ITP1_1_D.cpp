#include <iostream>
using namespace std;

int main() {
    int time, h, m, s;
    cin >> time;
    h = time/60/60;
    m = (time-h*60*60)/60;
    s = time-h*60*60 - m*60;
    cout << h << ":" << m << ":" << s << endl;
}