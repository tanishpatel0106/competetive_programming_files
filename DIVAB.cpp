#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        int d = a%b;
        if(d==0){
            cout << -1 << endl;
        }
        long long x = c;
        int e = x%a;
        int f = x%b;
        if(e!=0){
            x = c+a-e;
        }
        while(!(e==0 && f!=0)){
            x = x+a;
        }
        cout << x << endl;
    }
    return 0;
}