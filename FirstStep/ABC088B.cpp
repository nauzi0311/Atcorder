#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0;i < N;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end(),greater<int>{});
    int Alice = 0,Bob = 0;
    for(int i = 0;i < N;i++){
        if(i % 2 == 0){
            Alice += A[i];
        }else{
            Bob += A[i];
        }
    }
    cout << Alice - Bob;
    return 0;
}