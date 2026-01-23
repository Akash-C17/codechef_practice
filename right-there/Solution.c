#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for (int i =0 ; i<t ; i++){
	    int n,x;
	    scanf("%d %d", &n,&x);
	    
	    if(n>x){
	        printf("\nno");
	    }
	    else{
	        printf("\nyes");
	    }
	} 
	return 0;

}

