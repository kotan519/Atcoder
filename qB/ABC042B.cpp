#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;

    vector<string> S(N);
    for (int i = 0; i < N; i++)
        cin >> S[i];

    sort(S.begin(), S.end());

    string ans;
    for (int i = 0; i < N; i++)
        ans += S[i];
    cout << ans << endl;
    return 0;
}

// ソートする配列などがvector関数で呼び出されていたら、begin(),end()などが使える
// ventor関数は動的配列の一種であり、配列の大きさを指定せずとも大きさを柔軟に変更できる