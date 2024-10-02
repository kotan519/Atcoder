#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, A;
    cin >> S;
    int count = S.length();
    string result = S.substr(0, 1) + to_string(count - 2) + S.substr(count - 1, 1);
    cout << result << endl;
    return 0;
}

// string substr(size_t pos = 0, size_t len = npos) const;