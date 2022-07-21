#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, a;
	cin >> t;
	while(t--){
	    cin >> a;
	    int g = floor((a*60)/20);
	    cout << g << endl;
	}
	return 0;
}
