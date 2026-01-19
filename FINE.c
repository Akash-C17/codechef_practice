#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i =0; i<t ; i++){
	    int x;
	    scanf("%d", &x);
	    
	    if(x<=70){
	        printf("\n0");
	    }
	    else if(x>70 && x<=100){
	        printf("\n500");
	    }
	    else{
	        printf("\n2000");
	    }
	}
	return 0;

}

