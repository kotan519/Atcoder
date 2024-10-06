#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    for(int i=0; i<s.size(); i+=2) ans += s[i];
    cout << ans << endl;
    return 0;
}

// string型のに"+="を使うことで文字を追加していくことができる