#include <stdio.h>

int main() {
        int t,i;
        scanf("%d", &t);
        
        for(i =0 ; i < t ; i++){
            
            int X;
            scanf("%d", &X);
            
            if(X<=10){
                printf("\nYes");
            }
            else{
                printf("\nNo");
            }
        }
        return 0;
}
