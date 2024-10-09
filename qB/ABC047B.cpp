#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;
    int x, y, a;
    int x_left = 0, x_right = W, y_top = H, y_bottom = 0;
    
    for(int i = 0; i<N; i++){
        cin >> x >> y >> a;
        if(a == 1){
            if(x_left < x) x_left = x;
            // max(x_left, x);
        }else if(a == 2){
            if(x_right > x) x_right = x;
            // min(x_right, x);
        }else if(a == 3) {
            if(y_bottom < y) y_bottom = y;
            // max(y_bottom, y);
        }else{
            if(y_top > y) y_top = y;
            // min(y_top, y);
        }
    }

    int ans = max(0, x_right - x_left) * max(0, y_top - y_bottom);
    cout << ans << endl;
    return 0;
}

// 二次元配列の面積計算の時は、xとyの右と左の座標を考えれば良い
// 今回の場合だと、マイナスになる可能性があるので、最後にmax()関数で-の時は0にしている