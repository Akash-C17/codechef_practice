#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
	    int g,b;
	    scanf("%d %d", &g,&b);
	    
	    printf("\n%d", b-g);
	}
	return 0;

}

