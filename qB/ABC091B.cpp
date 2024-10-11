#include <bits/stdc++.h>
using namespace std;

int main()
{
    int blue_n, red_n;
    cin >> blue_n;
    vector<string> blue(blue_n);
    map<string, int> freq;

    for (int i = 0; i < blue_n; i++)
    {
        cin >> blue[i];
        freq[blue[i]]++;
    };

    cin >> red_n;
    vector<string> red(red_n);
    for (int i = 0; i < red_n; i++)
    {
        cin >> red[i];
        freq[red[i]]--;
    };

    int ans = 0;

    for (const auto &freqC : freq)
    {
        if (freqC.second > ans)
            ans = freqC.second;
    }

    cout << ans << endl;
    return 0;
}

// map関数　　map<keyの型, valueの型>
// for(const auto& mapName : map)  先に定義したmapを全て探索できる