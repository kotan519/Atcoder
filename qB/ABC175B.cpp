#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> L(N);

    for(int i=0; i<N; i++){
        cin >> L[i];
    }

    sort(L.begin(), L.end());

    int ans = 0;

    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){
                if (L[i] != L[j] && L[j] != L[k] && L[i]+L[j] > L[k]) ans += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

// 長さの異なる3本の棒を選ぶ。
// 三角形の成立条件を満たす：任意の2辺の長さの和が残りの1辺よりも大きいこと。
// sort() = small->big 