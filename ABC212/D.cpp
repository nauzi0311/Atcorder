#include <bits/stdc++.h>
using namespace std;
const long long LINF = 1e18;

int main()
{
    int Q;
    cin >> Q;
    priority_queue<long long,vector<long long>,greater<long long>> bag;
    long long all = 0;
    for(int i = 0;i < Q;i++){
        int P;
        cin >> P;
        if(P == 1){
            long long X;
            cin >> X;
            bag.push(X - all);
        }else if(P == 2){
            long long X;
            cin >> X;
            all += X;
        }else{
            //P == 3
            cout << bag.top() + all << endl;
            bag.pop();
        }
    }
    return 0;
}
