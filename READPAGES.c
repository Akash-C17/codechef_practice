#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i=0;i<t;i++){
        int n,x,y;
        scanf("%d %d %d", &n,&x,&y);
        
        if(n <= (x*y)){
            printf("\nyes");
        }
        else{
            printf("\nno");
        }
    }
    return 0;

}

