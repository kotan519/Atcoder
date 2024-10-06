#include <bits/stdc++.h>
using namespace std;

int calcSum(int num){
    int result = 0;
    while(num>0){
        result += num%10;
        num = num/10;
    }
    return result;
}

int main() {
    int N;
    cin >> N;

    int min = 55;
    for(int i = 1; i<=N/2; i++){
        int j = N - i;
        if(i + j == N){
            int A = calcSum(i);
            int B = calcSum(j);
            if(A+B < min) min = A + B;
        }
    }

    cout << min << endl;
    return 0;
}

// for文を重ねるとき例えば、一つのfor文で実装できる for(int i=0; i<= N/2; i++){
//                                                j = N - i;
//                                           }
// for (int i = 1; i <= N; i++){
//     for(int j = j+1; j <= N; j++){
//         if (i + j == N){
//             ------
//         }
//     } 
// }
