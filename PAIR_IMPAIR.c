#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("--------------------------PAIR / IMPAIR TESTE------------------------------\n \n \n \n");
	int x;
	printf("donner un nombre ENTIER: ");
	scanf("%d",&x);
	printf("\n \n \n \n");
	(x%2==0)?printf("le nombre %d est PAIR",x):printf("le nombre %d est  IMPAIR",x);
}
