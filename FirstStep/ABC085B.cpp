#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for(int i = 0;i < N;i++){
        cin >> d[i];
    }

    sort(d.begin(),d.end());
    vector<int>::iterator result = unique(d.begin(),d.end());
    d.erase(result,d.end());

    cout << d.size();
    return 0;
}