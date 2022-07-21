#include <stdio.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a, count = 0;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < a; i++)
        {
            if (arr[i] == arr[i+1])
            {
                count++;
            }
        }
    }
}