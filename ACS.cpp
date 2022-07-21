#include <iostream>>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int p;
        cin >> p;
        if(p%100 == 0){
            cout << p/100 << endl;
        }
        else if(p%100 <= 10 && ((p%100) + (p/100)) <= 10){
            cout << (p/100) + p%100 << endl;
        }       
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}