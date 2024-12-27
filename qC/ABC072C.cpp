#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    map<int, int> mp;
    for(int i=0; i<N; i++){
        int X; cin >> X;
        mp[X]++;
        mp[X+1]++;
        mp[X-1]++;
    }

    int ans = INT_MIN;
    for(const auto& value : mp){
        ans = max(ans, value.second);
    }

    cout << ans << endl;
    return 0;
}