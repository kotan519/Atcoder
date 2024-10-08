#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int a[110];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a[i];
    }

    sort(a, a+N, greater<int>());

    int alice = 0, bob = 0;
    for(int i=0; i<N; i++){
        if(i%2 == 0){
            alice += a[i];
        }else{
            bob += a[i];
        }
    }

    int ans = alice - bob;
    cout << ans << endl;
    return 0;
}

// sort(a, a+N)は配列の初めのアドレスaから配列の最後の要素の次のアドレスa+Nまでの範囲を降順greater<int>()でソート