#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N,Y;
    cin >> N >> Y;
    for(int i = 0;i <= N;i++){
        for(int j = 0; j <= N - i;j++){
            int k = N - i - j;
            int sum = i*10000 + j*5000 + k*1000;
            if(sum == Y){
                printf("%d %d %d",i,j,k);
                return 0;
            }
        }
    }
    printf("-1 -1 -1");
    return 0;
}