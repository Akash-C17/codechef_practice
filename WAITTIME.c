#include <stdio.h>

int main() {
        int t;
        scanf("%d", &t);
        
        for (int i =0; i<t; i++){
            int k,x;
            scanf("%d %d", &k ,&x);
            
            printf("\n%d", (k*7)-x);
        }

}

