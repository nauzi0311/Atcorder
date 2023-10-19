#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t[110000],x[110000],y[110000];
    int N;
    cin >> N;
    t[0] = x[0] = y[0] = 0;
    for(int i = 0;i < N;i++){
        cin >> t[i+1] >> x[i+1] >> y[i+1];
    }
    for(int i = 0;i < N;i++){
        //到達可能か
        int sum = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        int dt = t[i+1] - t[i];
        if(sum > dt){
            cout << "No" << endl;
            return 0;
        }
        //偶奇チェック
        if((sum%2) != (dt%2)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}