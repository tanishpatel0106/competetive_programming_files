#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,x,y,t;

priority_queue<pair<int, int>> p,nul;

map<int,vector<int>> k;

void autofunc(){
    while(!p.empty()) {
        cout << -p.top().first << ' ';
        p.pop();
    }
    cout << endl;
}

void xorsmall(){
    p=nul;k.clear();
    cin >> n >> x >> y;
    for(int i=1;i<=n;i++) {
        cin >> t;
        p.push({-t,i});
    }
    for(int i=1;i<=y;++i) {
        pair<int,int>_ = {-((-p.top().first)^x),p.top().second};
        k[p.top().second].push_back(i);
        if(k[p.top().second].size()==4) {
        int s=k[p.top().second][3]-k[p.top().second][1];
        i+=(y-i)/s*s;
        for(;i<=y;++i) {
            pair<int,int> t={-((-p.top().first)^x),p.top().second};
            p.pop();
            p.push(t);
        }
        autofunc();
        return;
        }
        p.pop();
        p.push(_);
    }
    autofunc();
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        xorsmall();
    }
    return 0;
}
