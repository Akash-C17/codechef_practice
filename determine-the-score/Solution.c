#include <stdio.h>

int main() {
	int t,i;
	scanf("%d", &t);
	
	for( i = 0; i <t ; i++){
	    int x,n;
	    scanf("%d %d", &x, &n);
	    
	    int point;
	    
	    point = (x/10) * n ; 
	    
	    printf("\n%d", point);
	}
	return 0;
	

}
