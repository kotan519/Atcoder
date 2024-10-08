#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, x;
    cin >> N >> x;
    int x_o = x;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;

    for(int i = 0; i < N; i++){
        x = x - a[i];
        ans++;
        if(x <= 0) break;
    }

    if(x != 0) ans--;

    cout << ans << endl;
    return 0;
}