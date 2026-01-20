#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i =0; i<t; i++){
	    int n;
	    scanf("%d", &n);
	    
	    int time = n*60;
	    
	    printf("\n%d", time/20);
	}
	return 0;
}

