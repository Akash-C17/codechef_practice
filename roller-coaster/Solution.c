#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i<t ; i++){
	    int x,h;
	    scanf("%d %d", &x,&h);
	    
	    if(x>=h){
	        printf("\nYes");
	    }
	    else{
	        printf("\nNo");
	    }
	}
	return 0;
}

