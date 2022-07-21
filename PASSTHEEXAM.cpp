#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, s;
        cin >> a >> b >> c;
        s = a+b+c;
        if (a<=100 && b<=100 && c<=100)
        {
            if (a>10 && b>10 && c>10 && s>=100){
                cout << "PASS";
            }
            else{
                cout << "FAIL";
            }
        }
        else{
            cout << "ERROR!";
        }
    }
    return 0;
}