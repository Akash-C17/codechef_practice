#include <stdio.h>

int main() {
	 int t;
	 scanf("%d", &t);
	 
	 for(int i=0;i<t;i++){
	     int n,k;
	     scanf("%d %d", &n,&k);
	     
	     if(k>n){
	         printf("\nyes");
	     }
	     else{
	         printf("\nno");
	     }
	 }
	 return 0;

}

