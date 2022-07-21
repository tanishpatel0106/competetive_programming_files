#include <vector>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n,0);
	    int a, b;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	        if(arr[i]==1){
	            a = i;
	        }
	        else if(arr[i]==n){
	            b = i;
	        }
	    }
	    int res = 0;
	    if(a==0 && b==n-1){
	        res = 0;
	    }
	    else if(a==0 && b!=n-1){
	        res = n-1 - b;
	    }
	    else if(a!=0 && b==n-1){
	        res = a;
	    }
	    else{
	        res = n-1 - b + a;
	        if(b<a){
	            res -=1;
	        }
	    }
	    cout << res << endl;
	}
	return 0;
}
