#include<stdio.h>
#include<stdlib.h>
int main()
{
	int MAX=10,i=0,compteur=0;
	float lesNotes[MAX],note,total=0,minNote,maxNote;
	char nom[30];
	printf("Donner le nom de l\'etudient: ");
	gets(nom);
	printf("entrer les notes entre 0 et 20 pour quitter entrer un nombre different de cette interval \n");
	do
	{
		printf("Note %d: ",i+1);
		scanf("%f",&note);
		lesNotes[i]=note;
		
		if((note<=20) && (note>= 0)){
			compteur++;
			total+=note;
		}
		i++;
	}while( (i<MAX )&& (note<=20) && (note>= 0));
	printf("Nom et Prenom: ");
	puts(nom);
printf("vous avez saisi %d notes \n",compteur);
	for(i=0;i<compteur;i++)
	{
		printf("%d -%.2f\n",i+1,lesNotes[i]);
	}
	float moyen=total/compteur;
	printf("MOYENNE : %.2f \n",moyen);
	if(moyen >10) printf("vous passez a la 2 eme annee\n");
	else if(moyen <8) printf("redoublant\n");
	else printf("rattrapage\n");
	maxNote = minNote = lesNotes[0];
	for (i=0;i<compteur;i++)
	{
		if(maxNote<lesNotes[i]) maxNote=lesNotes[i];
		if(minNote>lesNotes[i]) minNote=lesNotes[i];
	}
printf("La premiere note est %.2f \n",maxNote);
printf("La derniere note est %.2f \n",minNote);

}






