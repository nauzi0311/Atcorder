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

    int count = 0;
    while(true){
        bool Iseven = true;
        for(int i = 0;i < N;i++){
            if(A[i] % 2 != 0){
                Iseven = false;
            }
        }
        if(Iseven){
            for(int i = 0;i < N;i++){
                A[i] /= 2;
            }
            count++;
        }else{
            break;
        }
    }

    cout << count;
    return 0;
}