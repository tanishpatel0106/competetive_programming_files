#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

int main() {
	int t=1;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++)
	            cin>>a[i][j];
	    }
	    int curr=0;
	    int mx=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;i+j<n;j++){
	            curr+=a[j][i+j];
	        }
            mx=max(mx,curr);
	        curr=0;
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;i+j<n;j++){
	            curr+=a[j+i][j];
	        }
            mx=max(mx,curr);
	        curr=0;
	    }
        cout<<mx<<endl;
	}
		
	return 0;
}