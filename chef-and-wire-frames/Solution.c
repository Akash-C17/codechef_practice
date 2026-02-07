#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
	    int n,m,x;
	    scanf("%d %d %d", &n,&m,&x);
	    
	    int area = 2*(n+m);
	    
	   int total = area*x;
	   
	   printf("\n%d", total);
	    
	}

}

