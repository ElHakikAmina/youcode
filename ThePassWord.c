#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int issymbol(char c)
{
	if(c>31 && c<47) return 1;
	else if(c>57 && c<64) return 1;
	else if(c>90 && c<97) return 1;
	else if(c>122 && c<127) return 1;
	else return 0;	
}
int main()
{
	char password[30];
	int taillePssWrd,i,u,l,d,s;
	u=0;
	l=0;
	d=0;
	s=0;
	printf("-----------------CREER UN COMPTE ------------------------\n\n\n");
	printf("\t DONNER UN MOT DE PASSE\n\n[doit etre plus de 7 et  contenir des shiffres et des caracteres et des caracteres speciaux]\n>>>>");
	scanf("%s",password);
	taillePssWrd=strlen(password);
	if(taillePssWrd<9){
		printf("Il faut avoir plus que 7 charactere vous avez entrez %d .\n",taillePssWrd);
	}
	for (i=0;i<taillePssWrd;i++)
	{
		if(isupper(password[i]) && u==0) u++;	
		if(isdigit(password[i]) && d==0) d++;
		if(islower(password[i]) && l==0) l++;
		if(issymbol(password[i]) && s==0) s++;
	}
	if((u+d+l+s)>3) printf("mot de passe fort");
	else printf("mot de passe faible");	
//	printf("%d %d %d %d",u,d,l,s);
	if(u==0) printf("\n vous devez ajouter an majuscule");
	if(d==0) printf("\n vous devez ajouter an chiffre");
	if(l==0) printf("\n vous devez ajouter an miniscule");
	if(s==0) printf("\n vous devez ajouter an symbol");
}
