#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    int cost = 0;

    if (A + B <= 2 * C)
        cost = A * X + B * Y;
    else{
        int Z =  min(X, Y);
        cost = 2*C * Z + (X-Z)*min(A, 2*C) + (Y-Z)*min(B, 2*C);
    }

    cout << cost << endl;
    return 0;
}