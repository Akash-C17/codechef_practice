#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i =0;i<t;i++){
	    int x1,y1,x2,y2;
	    scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
	    
	    if((x1+y1)<(x2+y2)){
	        printf("\n%d", x1+y1);
	    }
	    else{
	        printf("\n%d", x2+y2);
	    }
	    
	}
	return 0;

}

