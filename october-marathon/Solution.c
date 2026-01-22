#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	
	if(x<3){
	    printf("gold");
	}
	else if(x<6){
	    printf("silver");
	}
	else{
	    printf("bronze");
	}
	return 0;

}

