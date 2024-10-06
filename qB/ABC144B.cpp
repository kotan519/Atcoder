#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string ans = "No";

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(N == i*j){
                ans = "Yes";
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}