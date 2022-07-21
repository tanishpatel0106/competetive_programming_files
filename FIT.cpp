#include <iostream>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int num;
        scanf("%d", &num);
        printf("%d\n", num*10);
    }
    return 0;
}