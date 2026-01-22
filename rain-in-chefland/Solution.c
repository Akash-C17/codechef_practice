#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i<t;i++){
	    int x;
	    scanf("%d", &x);
	    
	    if(x>=7){
	        printf("\nheavy");
	    }
	    else if(x>=3){
	        printf("\nmoderate");
	    }
	    else{
	        printf("\nlight");
	    }
	}
	return 0;

}

