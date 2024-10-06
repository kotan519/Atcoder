#include <bits/stdc++.h>
using namespace std;

int calcSum(int num){
    int result = 0;
    while(num > 0){
        result += num % 10;
        num = num/10;
    }
    return result;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;
    int result = 0;
    
    for(int i = 1; i<N+1; i++){
        result = calcSum(i);
        if(A <= result && result <= B) ans += i;
    };

    cout << ans << endl;
    return 0;
}

// 格桁の計算が10で割ったあまりで制御できる
// 一の位 = number % 10; 