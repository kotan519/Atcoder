#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C; cin >> A >> B >> C;
    int Max = max(A, max(B, C));

    int ans;
    int num = Max-A + Max-B + Max-C;
    if(num%2 == 1) ans = (num + 3)/2;
    else ans = num/2;

    cout << ans << endl;
    return 0;
}