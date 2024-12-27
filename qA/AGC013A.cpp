#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    int count = 1;
    int trend = 0;
    for(int i=1; i<N; i++){
        if(trend == 0){
            if (A[i-1] < A[i]){
                trend = 1;
            }else if(A[i-1] > A[i]){
                trend = -1;
            }
        }else if(trend == 1){
            if(A[i-1] > A[i]){
                count++;
                trend = 0;
            }
        }else if(trend == -1){
            if(A[i-1] < A[i]){
                count++;
                trend = 0;
            }
        }
    }

    cout << count << endl;
    return 0;
}