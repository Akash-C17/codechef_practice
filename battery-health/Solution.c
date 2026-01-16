#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i<t;i++){
	    int x;
	    scanf("%d", &x);
	    
	    if(x>=80){
	        printf("\nyes");
	    }
	    else{
	        printf("\nNo");
	    }
	}
	return 0;
}

