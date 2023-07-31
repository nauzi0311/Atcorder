#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N;
    cin >> N;
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,less<pair<ll,int>>> pq;
    for(int i = 0;i < N;i++){
        ll A;
        cin >> A;
        pq.push(make_pair(A,i+1));
    }
    pq.pop();
    cout << pq.top().second << endl;
}