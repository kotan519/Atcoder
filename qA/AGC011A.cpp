#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, C, K;
    cin >> N >> C >> K;
    vector <long long> T(N);
    for(int i=0; i<N; i++) cin >> T[i];

    sort(T.begin(), T.end());

    int ans = 0;
    int i = 0;
    while(i < N){
        int bus_depart = T[i];
        int count = 0;
        while(i < N && count < C && T[i] - bus_depart <= K){
            i++;
            count++;
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}