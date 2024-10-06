#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 0;

    for(int i = A; i<=B; i++){
        int left1 = i/10000 % 10;
        int left2 = i/1000 % 10;
        int right1 = i % 10;
        int right2 = i/10 % 10;
        if(left1 == right1 && left2 == right2) ans++;
    }

    cout << ans << endl;
    return 0;
}

// 12345のそれぞれの桁にアクセスするには、その桁数で割ってあげて、その後10で割って余りを出す
// 1桁目を取り出したいとき : 12345 / 10000 % 10 = 1