#include <bits/stdc++.h>
#include <iostream>
#define int long long
using namespace std;

int n,m,x;

void angledFlip() {
    vector<int> a,b,c,d;
    cin >> n >> m;
    if(n==1||m==1){
        for(int i=0;i<n;++i)
        for(int j=0;j<m;++j){
            cin >> x;
            a.push_back(x);
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin >> x;
                b.push_back(x);
            }
        }
        if(a==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        return;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> x;
            if((i^j)%2){
                a.push_back(x);
            }
            else{
                b.push_back(x);
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> x;
            if((i^j)%2){
                c.push_back(x);
            }
            else{
                d.push_back(x);
            }
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    if(a==c&&b==d){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        angledFlip();
    }
    return 0;
}
