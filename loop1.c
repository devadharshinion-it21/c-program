#include <stdio.h>
int main() {
	int o , n , deva;
	printf("Enter the number of rows and column\n",o);	
	scanf("%d",&deva);
	for(o=0; o < deva; o++) {
	for(n=0; n < deva; n++) {
 	if(o==0 || o==deva-1 || n==0 || n==deva-1) { 
	printf(" * ");
	}
	else
	printf("   ");
	}
	printf("\n");
	}
   return 0;
}
