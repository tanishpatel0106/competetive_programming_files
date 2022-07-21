#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a>b && a>c){
            cout << "Alice \n";
        }
        else if(b>a && b>c){
            cout << "Bob \n";
        }
        else if(c>a && c>b){
            cout << "Charlie \n";
        }
        else{
            cout << "Error!";
        }
    }
    return 0;
}