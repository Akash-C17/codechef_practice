#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i<t;i++){
	    int x,y;
	    scanf("%d %d", &x,&y);
	    
	    if(x>=y){
	        printf("\n0");
	    }
	    else if(x<y){
	        printf("\n%d", y-x);
	    }
	}
	return 0;

}

