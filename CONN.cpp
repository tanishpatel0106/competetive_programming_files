#include <iostream>
using namespace std;

int main(){
    int t, n, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (((2*j)+(7*i))==n)
                {
                    c = 1;
                }
                else
                {
                    c = 0;
                }
            }
        }
        if (c == 1)
        {
            cout << "YES";
        }
        else if (c == 0)
        {
            cout << "NO";
        }
    }
    return 0;
}