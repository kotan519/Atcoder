#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    vector< vector<int> >X(N, vector<int>(D));
    for(int i=0; i<N; i++){
        for(int j=0; j<D; j++){
            cin >> X[i][j];
        }
    }

    int ans = 0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            int norm = 0;
            for(int k=0; k<D; k++){
                int diff = abs(X[i][k]-X[j][k]);
                norm += diff*diff;
            }
            for(int l=0; l<=norm; l++){
                if(l*l == norm) ans += 1;
            }

        }
    }

    cout << ans << endl;
    return 0;
}

// 2次元ベクトルを初期化する構文です。これを使うことで、動的にサイズを決められる2次元配列を作成できます
// vector< vector<int> > X(N, vector<int>(D));
// X は N 個の「1次元ベクトル vector<int>」を格納する2次元ベクトルです。