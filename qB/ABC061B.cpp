#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> M >> N;
    vector<int> t(2 * N);
    for (int i = 0; i < 2 * N; i++)
        cin >> t[i];

    vector<int> num(M);
    for (int i = 0; i < 2 * N; i++)
    {
        num[t[i]]++;
    }

    for (int i = 1; i <= M; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}