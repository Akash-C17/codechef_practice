#include <stdio.h>

int main() {
	int x,y;
	scanf(" %d %d", &x ,&y);
	
	int unattempted;
	
	unattempted = x - y;
	
	printf("%d", unattempted);
	
	return 0;
}
