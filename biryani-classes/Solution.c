#include <stdio.h>

int main() {
	int t,i;
	scanf("%d", &t);
	
	for (i =0; i<t ; i++){
	    int x,y;
	    scanf(" %d %d", &x , &y);
	    
	    int total;
	    total = x * y ;
	    
	    printf("\n%d", total);
	}
	return 0;

}
