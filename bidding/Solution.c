#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i =0; i<t;i++){
	    int a,b,c;
	    scanf("%d %d %d", &a,&b,&c);
	    
	    if( a>b && a>c){
	        printf("\nalice");
	    }
	    else if(b>a && b>c){
	        printf("\nbob");
	    }
	    else{
	        printf("\ncharlie");
	    }
	}
	return 0;

}

