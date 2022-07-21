#include <iostream>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int num;
        char str[80];
        scanf("%d", &num);
        scanf("%s", &str);
        for (int k=0; k<num; k++){
	        if (str[k] == 'A') {
	            printf("T");
		    }
		    else if (str[k] == 'T') {
		        printf("A");
		    }
		    else if (str[k] == 'C') {
		        printf("G");
		    }
		    else if (str[k] == 'G') {
		        printf("C");
		    }
	  }
	  printf("\n");
    }
    return 0;
}