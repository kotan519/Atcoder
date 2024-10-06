#include <iostream>
using namespace std;

int main() {
    string s;
    int ans;
    cin >> s;
    int N = s.size();
    int index_A = 0, index_Z = 0;
    for(int i=0; i<N; i++){
        if(s[i] == 'A') {
            index_A = i;
            break;
        }
    }
    for(int i=N-1; i>=0; i--){
        if(s[i] == 'Z') {
            index_Z = i;
            break;
        }    
    }
    ans = index_Z - index_A + 1;
    cout << ans << endl;
    return 0;
}