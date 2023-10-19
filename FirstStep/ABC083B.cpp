#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N,A,B,ans = 0;
    cin >> N >> A >> B;
    for(int i = 1;i <= N;i++){
        int t_4 = (i/1000)%10;
        int t_3 = (i/100)%10;
        int t_2 = (i/10)%10;
        int t_1 = i%10;
        int sum = t_1 + t_2 + t_3 + t_4;
        if(A <= sum && sum <= B){
            ans += i;
        }
    }
    cout << ans;
    return 0;
}