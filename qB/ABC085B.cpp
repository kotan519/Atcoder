#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     vector<int> d(N);
//     for(int i=0; i<N; i++) cin >> d[i];

//     sort(d.begin(), d.end(), greater<int>());

//     int ans = 0;
//     int min_value = 110;

//     for(int i=0; i<N; i++) {
//         if(min_value > d[i]) {
//             ans++;
//             min_value = d[i];
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }

int main() {
    int N;
    cin >> N;
    int d[110];
    for(int i; i<N; i++) cin >> d[i];

    int num[110] = {0};
    for(int i = 0; i<N; i++){
        num[d[i]]++;
    }

    int ans = 0;
    for(int i=0; i<110; i++){
        if(num[i] != 0) ans++;
    }

    cout << ans << endl;
    return 0;
}

// バケット法　[集計処理]では連想配列を用いて探索する