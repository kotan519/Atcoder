#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int m;
    int min_value = 114514;
    int total = 0;
    for(int i=1; i<=n; i++){
        cin >> m;
        total += m;
        min_value = min(min_value, m);
    }

    cout << n + (x - total) / min_value << endl;
    return 0;
}