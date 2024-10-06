#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int binary = 1;
    for (int i = 0; i < 7; i++)
    {
        if (N < (1 << (i+1))){
            binary = (1 << i);
            break;
        }
    }
    cout << binary << endl;
    return 0;
}

// (1 << i) = 2^i