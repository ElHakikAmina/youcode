#include<stdio.h>
#include<stdlib.h>
main()
{
	int x,y,tmp;
	printf(" \t \t \t ECHANGE DE ENTIERS \n \n \n \n");
printf("donner le nombre x: ");
	scanf("%d",&x);
	printf("donner le nombre y: ");
	scanf("%d",&y);
	printf("\n \n \n \n");
	printf("Avant echange \t \t \t x = %d et y = %d \n \n",x,y);
	tmp=x;
	x=y;
	y=tmp;
	printf("Apres echange \t \t \t x = %d et y = %d",x,y);
}
