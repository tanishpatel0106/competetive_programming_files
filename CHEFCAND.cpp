#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if(x>=n){
            cout << 0 << endl;
        }
        else{
            int count = n-x;
            int p = count%4;
            if(p==0){
                cout << count/4 + 1 << endl;
            }
            else{
                cout << count/4 << endl;
            }
        }
    }
    return 0;
}