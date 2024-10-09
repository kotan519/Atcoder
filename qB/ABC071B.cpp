#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    char al[27] = {0};
    int i = 0;
    for(int i = 0; i<S.length(); i++){
        al[S[i] - 'a']++;
    }

    char ans = ' ';

    for(int i = 0; i < 26; i++){
        if(al[i] == 0) {
            ans = 'a' + i;
            break;
        }
    }

    if(ans == ' ') {
        cout << "None" << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}

// アルファベットも'a'で引くことで数字に変換することができる。例えば、cは3番目(index 2)に対応するが
// 'c' - 'a'との差2を得ることができる。