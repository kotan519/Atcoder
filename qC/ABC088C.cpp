#include <bits/stdc++.h>
using namespace std;
int c[4][4];

int main() {
   
    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            cin >> c[i][j];
        }
    }

    if(
        c[1][1]+c[2][2] == c[1][2]+c[2][1] &&
        c[1][1]+c[3][2] == c[1][2]+c[3][1] &&
        c[1][1]+c[3][3] == c[1][3]+c[3][1] &&
        c[2][2]+c[3][3] == c[3][2]+c[2][3]
    )   
    cout << "Yes" << endl;
    else    cout << "No" << endl;

    return 0;
}