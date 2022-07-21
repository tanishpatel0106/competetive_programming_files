#include <iostream>
using namespace std;

int main() {
	int t, a;
	cin >> t;
	while(t--){
	    cin >> a;
	    if(a%10 == 0){
	        cout << 0 << endl;
	    }
	    else if(a<10){
	        cout << a << endl;
	    }
	    else if((a-1)%10 == 0){
	        cout << 1 << endl;
	    }
	    else if((a-2)%10 == 0){
	        cout << 2 << endl;
	    }
	    else if((a-3)%10 == 0){
	        cout << 3 << endl;
	    }
	    else if((a-4)%10 == 0){
	        cout << 4 << endl;
	    }
	    else if((a-5)%10 == 0){
	        cout << 5 << endl;
	    }
	    else if((a-6)%10 == 0){
	        cout << 6 << endl;
	    }
	    else if((a-7)%10 == 0){
	        cout << 7 << endl;
	    }
	    else if((a-8)%10 == 0){
	        cout << 8 << endl;
	    }
	    else if((a-9)%10 == 0){
	        cout << 9 << endl;
	    }
	}
	return 0;
}
