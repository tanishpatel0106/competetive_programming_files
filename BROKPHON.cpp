#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int b[a];
        for(int i=1; i<=a; i++){
            cin >> b[i];
        }
        int count = 0;
        for(int i=0; i<a; i++){
                if(b[i] != b[i+1]){
                    if (b[i-1] != b[i]){
                        count++;
                    }
                    else{
                        count = count + 2;
                    }
                }
        }
        cout << count << endl;
    }
}