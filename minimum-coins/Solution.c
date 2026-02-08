#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
	    int x;
	    scanf("%d", &x);
	    
	    int c = 1 ; int n = 10;
	    
	    int coin = x%10 ;
	    
	    printf("\n%d", coin);
	}
	return 0;

}

