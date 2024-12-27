#include <bits/stdc++.h>
using namespace std;

int digit(long long n){
    int ans = 0;
    while(n > 0){
        n = n/10;
        ans++;
    }
    return ans;
}

int F(long long a, long long b){
    int a_d = digit(a);
    int b_d = digit(b);
    return max(a_d, b_d);
}

int main(){
    long long N;
    cin >> N;
    int ans = F(1, N);
    for (int i = 1; i <= sqrt(N); i++){
        if(N % i == 0){
            ans = min(ans, F(i, N/i));
        }
    }
    cout << ans << endl;
    return 0;
}