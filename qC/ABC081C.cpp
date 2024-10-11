#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    map<int, int> freq;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        freq[A[i]]++;
    }

    vector< pair<int, int> > F;
    for (const auto &m : freq)
    {
        F.push_back(make_pair(m.second, m.first)); // fist, secondを逆に
    }

    sort(F.begin(), F.end());

    int ans = 0;
    int F_size = F.size();
    for (const auto f : F)
    {
        if (F_size <= K)
            break;
        ans += f.first;
        F_size--;
    }
    
    cout << ans << endl;
    return 0;
}