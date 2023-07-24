#include <bits/stdc++.h>
using namespace std;
const long long LINF = 1e18;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<long long> A(N),B(M);
    for(auto& num:A){
        cin >> num;
    }
    for(auto& num:B){
        cin >> num;
    }
    
    vector<pair<long long,int>>P;
    for(int i = 0;i < N;i++){
        P.push_back(make_pair(A.at(i),0));
    }
    for(int i = 0;i < M;i++){
        P.push_back(make_pair(B.at(i),1));
    }
    
    long long min_diff = LINF;
    sort(P.begin(),P.end());
    for(int i = 0;i < N+M-1;i++){
        if(P[i].second != P[i+1].second){
            min_diff = min(min_diff,P[i+1].first - P[i].first);
        }
    }
    cout << min_diff << endl;
    return 0;
}
