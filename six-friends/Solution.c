#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d", &x,&y);
	    
	    int t1 = x*3 ; int t2 = y*2;
	    
	    if(t1>t2){
	        printf("\n%d", t2);
	    }
	    else{
	        printf("\n%d", t1);
	    }
	   
}
 return 0;
}

