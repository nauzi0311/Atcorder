#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pass;
    cin >> pass;
    if(stoi(pass) % 1111 == 0){
        cout << "Weak";
        return 0;
    }
    string ans = "Weak";
    for(int i = 0;i < 3;i++){
        if(pass[i] + 1 == pass[i+1]){
            continue;
        }
        if(pass[i] == '9'){
            if(pass[i+1] == '0'){
                continue;
            }
        }
        ans = "Strong";
        break;
    }
    cout << ans;
    return 0;
}
