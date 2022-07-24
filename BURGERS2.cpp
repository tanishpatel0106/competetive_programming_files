#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, r;
        cin >> x >> y >> n >> r;
        int sum = 0;
        if((r/y)>=n){
            cout << 0 << " " << n << endl;
        }
        else if((r/x)<n){
            cout << -1 << endl;
        }
        else{
            int h = (y*n);
            int g = (x-y);
            int m = (r-h)/g;
            if(((r-h)%g)!=0){
                m++;
            }
            cout << m << " " << n-m << endl;
        }
    }
    return 0;
}