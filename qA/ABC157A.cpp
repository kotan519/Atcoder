#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    int A = N/2;
    if(N%2 == 1) ++A;
    cout << A << endl;
    return 0;
}