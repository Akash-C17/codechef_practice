#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i =0; i<t; i++){
	    int x;
	    scanf("%d", &x);
	    
	    if(4*x <= 1000){
	        printf("\nyes");
	    }
	    else{
	        printf("\nno");
	    }
	}
	return 0;

}

