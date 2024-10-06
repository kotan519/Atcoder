#include <stdio.h>
#include <iostream>
using namespace std;

// int main () {
//     int a, b;
//     cin >> a >> b;
//     int c = a*b;
//     if(c % 2 == 1) cout << "Odd" << endl;
//     else cout << "Even" << endl;
// }

int main () {
    int a, b;
    cin >> a >> b;
    if((a+b-1)/b == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;
}