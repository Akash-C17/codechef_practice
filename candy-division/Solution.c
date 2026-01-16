#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i =0; i<t ; i++){
	    int n;
	    scanf("%d", &n);
	    
	    int candies;
	    candies = n%3;
	    
	    if(candies == 0){
	        printf("\nyes");
	    }
	    else{
	        printf("\nNo");
	    }
	}
	return 0;

}

