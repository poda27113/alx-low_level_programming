#include "putchar.h"
#include <stdio.h>
int main(void)
{
	int i, n=3, s ;
	// Enter a number for display its multiples
	 printf("1024 : \n") ;
	scanf("%d", &s) ;
	printf("\n 3%1024 are :\n\n", s) ;
	 for(i = 1 ; i <= n ; i++)
	if(i % s == 0)
	printf("%d\t", i) ;
	 return 0;
	 }
