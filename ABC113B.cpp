#include <iostream>
using namespace std;

int main(){
    int n, t, ans;
    int H[1000];
    float a, avgTemp, between, minbet=10000.0;
    cin >> n;
    cin >> t >> a;
    
    for(int i=0; i<n; i++) {
        cin >> H[i];
        avgTemp = t - H[i]*0.006;
        between = abs(a - avgTemp);
        if(minbet>between) {
            minbet = between;
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}

// abs(number) 絶対値 absolute number