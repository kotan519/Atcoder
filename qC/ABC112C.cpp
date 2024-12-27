#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> x(N), y(N), h(N);
    for(int i=0; i <N; i++){
        cin >> x.at(i) >> y.at(i) >> h.at(i);
    }

    for(int cx=0; cx<=100; cx++){
        for(int cy=0; cy<=100; cy++){
            int H = -1;
            bool valid = true;

            for(int i=0; i<N; i++){
                if(h.at(i) > 0){
                    int tempH = h.at(i) + abs(cx - x.at(i)) + abs(cy - y.at(i));             
                    if(H == -1){
                        H = tempH;
                    }else if(H != tempH){
                        valid = false;
                        break;
                    }
                }
            }

            if(valid){
                for(int i=0; i<N; i++){
                    if(h.at(i) == 0){
                        if(max(H - abs(x.at(i) - cx) - abs(y.at(i) - cy), 0) != 0){
                            valid = false;
                            break;
                        }   
                    }
                }
                if(valid){
                    cout << cx << " " << cy << " " << H << endl;
                    return 0;
                }
            }
        }
    }
}