#include <stdio.h>

int main() {
	int t,i;
	scanf("%d", &t);
	
	for(i =0; i < t; i++){
	    int x;
	    scanf("%d", &x);
	    
	    if( x == 6){
	        printf("\nyes");
	    }
	    else{
	        printf("\nNo");
	    }
	}
	return 0;
}
