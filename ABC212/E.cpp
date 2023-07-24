#include <bits/stdc++.h>
#define MOD 998244353
using namespace std;
const long long LINF = 1e18;

int main()
{
    int N,M,K;
    cin >> N >> M >> K;
    long long dp[K+1][N];
    for(int i = 0;i < K+1;i++){
        for(int j = 0;j < N;j++){
            dp[i][j] = 0;
        }
    }
    vector<vector<int>> no_road(N);
    for(int i = 0;i < M;i++){
        int U,V;
        cin >> U >> V;
        no_road.at(U-1).push_back(V-1);
        no_road.at(V-1).push_back(U-1);
    }
    dp[0][0] = 1;
    for(int i = 0;i < K;i++){
        long long total = 0;
        for(int j = 0;j < N;j++) total += dp[i][j];
        for(int j = 0;j < N;j++){
            dp[i+1][j] = total - dp[i][j];
            for(auto no_Road:no_road.at(j)){
                dp[i+1][j] -= dp[i][no_Road];
            }
            dp[i+1][j] %= MOD;
        }
    }
    cout << dp[K][0] << endl;
    return 0;
}
