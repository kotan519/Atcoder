#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    // void sort(RandomIt first, RandomIt last, Compare comp);

    string t;
    cin >> t;
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());
    // void reverse(BidirectionalIterator first, BidirectionalIterator last);

    if(s < t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}