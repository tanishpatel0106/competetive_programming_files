#include <iostream>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while (t--)
    {
        cin >> a >> b >> c;
        if (c>=a && c<b)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
	return 0;
}
