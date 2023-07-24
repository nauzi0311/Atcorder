#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    if(0 < A){
        if(B == 0) cout << "Gold";
        else if(0 < B) cout << "Alloy";
        else return -1;
    }else if(A == 0){
        if(0 < B) cout << "Silver";
        else return -1;
    }else return -1;
    return 0;
}
