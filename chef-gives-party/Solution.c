#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i<t;i++){
	    int n,x,k;
	    scanf("%d %d %d", &n,&x,&k);
	    
	    if(n*x <= k){
	        printf("\nyes");
	    }
	    else{
	        printf("\nno");
	    }
	}
	return 0;

}

