#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i < t ; i++){
	    int x,y;
	    scanf("%d %d", &x,&y);
	    
	    if (x<y){
	        printf("\nyes");
	    }
	    else{
	        printf("\nno");
	    }
	}
	return 0;

}

