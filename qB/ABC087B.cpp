#include <iostream>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    
    int ans = 0, left = X;


    for(int i=0; i<=A; i++){
        for(int j=0; j<=B; j++){
            for(int k=0; k<=C; k++){
                int left = i*500 + j*100 + k*50;
                if(left == X) ans+= 1;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

// 全探索問題　全ての通りを試す