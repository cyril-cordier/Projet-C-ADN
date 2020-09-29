#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "definition.c"

int n,mut;

void main(){
    int n,i,j,mem;
    char chaine[1024],z,ARN[1024],prot[1024];               //chaine ADN de depart,ADN ayant subi les mutations
    int memo[1024];                                                 //emplacements des mutations

    printf("************************************************************\n");
    printf("*                                                          *\n");
    printf("*              Projet Informatique Deug SV-S4              *\n");
    printf("*                                                          *\n");
    printf("*                     ''Chaine d'adn''                     *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*              Carboni Chabaud Cordier Landas              *\n");
    printf("*                       Groupe A,D-1                       *\n");
    printf("*                                                          *\n");
    printf("*                                   Appuyer sur entree     *\n");
    printf("*                                                          *\n");
    printf("************************************************************\n");
    scanf("%c",&z);

    printf("saisir une longueur de chaine ADN multiple de 3 et inferieure a 1024 : ");
    scanf("%d",&n);
    printf("\n\n");

    if(n%3!=0){
            n=(int)(n/3);
            n=n*3;
            if(n!=0){
                    printf("Le chiffre entre n'est pas multiple de 3, la valeur utilisee pour la suite sera : %d\n",n);
            }
    }

    if(n==0){
            n=3;
            printf("Vous venez de valider un entier inferieur a 3, la valeur utilisee pour la suite sera : %d\n",n);
    }

    chaine_aleatoire(chaine, n);
    mem=0;
    printf("Voici la chaine ADN generee:\n");
    for(i=0;i<n;i++){
            printf("%c",chaine[i]);
            mem++;
            if(mem==3){
                    printf(" ");
                    mem=0;
            }
    }
    mutation(chaine,n,memo,mut);
    transcription(ARN,n,chaine);
    traduction(ARN,n,prot);


}

                


/* 
POUR LA QUESTION 6, exo du tp à modifier


#include <stdio.h>
void main()
{
int j,i,a,b,k;
char adn[500],str[50];
sprintf(adn,"ATGGTCATCCTCAGGTCCTCCTAGCTGCTGAGTCA");
printf("chaine?\n");
scanf("%s",str);
a=strlen(adn);
b=strlen(str);
 for(i=0;i<a-b+1;i=i+1)
        {
        k=0;
        for(j=0;j<b;j=j+1)
                {
                if(adn[i+j]==str[j])
                        {
                        k=k+1;
                        }
                }
        if(k==j)
        {
        printf("position=%d\n",i+1);
        }
        }
} */