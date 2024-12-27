#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N; cin >> N;
    vector<long long> A(N);
    for(long long i=0; i<N; i++){
        cin >> A[i];
    }

    long long ans = N;
    sort(A.begin(), A.end());
    for(long long i=0; i<N;){
        if(A[i] == A[i+1]) {
            ans = ans - 2;
            i+=2;
        }else{
            i++;
        }
    }

    cout << ans << endl;
    return 0;
}