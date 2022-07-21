#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--){
        int a[n], i = 0;
        cin >> n;
        while (i<n)
        {
            cin >> a[i];
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; i++)
            {
                if (a[i] == a[j])
                {
                    /* code */
                }
                
            }
            
        }
        
    }
	return 0;
}
