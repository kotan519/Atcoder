#include <iostream>
using namespace std;

int main() {
    int n, max=0, min=1000000000;
    cin >> n;
    int A[100];
    
    for (int i=0; i<n; i++) {
        cin >> A[i];
        if(A[i]>max){
            max=A[i];
        }
        if(A[i]<min){
            min=A[i];
        }
    }
    
    int ans = max-min;
    cout << ans << endl;
    return 0;
}