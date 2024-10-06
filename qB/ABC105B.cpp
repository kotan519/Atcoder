#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int max_d = N/4 + 1;
    int max_c = N/7 + 1;
    string ans="No";

    for(int i=0; i<max_d; i++){
        for(int j=0; j<max_c; j++){
            int total = 4*i + 7*j;
            if(total == N) {
                ans = "Yes";
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}