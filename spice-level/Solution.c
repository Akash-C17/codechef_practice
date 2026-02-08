#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
	    
	    if(x>=7){
	        printf("\nhot");
	    }
	    else if(x>=4 && x<7){
	        printf("\nmedium");
	    }
	    else{
	        printf("\nmild");
	    }
	}
	return 0;

}

