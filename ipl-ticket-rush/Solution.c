#include <stdio.h>

int main() {
	int t;
	scanf("%d ", &t);
	
	for ( int i = 0 ; i < t ; i ++){
	    int n,m;
	    scanf("%d %d", &n , &m);
	    
	    if (n>=m){
	        printf("\n%d", n -m);
	    }
	    else if(m>n){
	        printf("\n%d", 0);
	    }
	}
}
