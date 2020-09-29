#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
extern int n;

void chaine_aleatoire(char T[],int n){
        int i;
        srand(time(0));
        for(i=0;i<=n;i++){
                int base=(int)(4.0*rand()/(RAND_MAX+1.0));

                if(base==0){
                        T[i]='A';
                }
                if(base==1){
                        T[i]='C';
                }
                if(base==2){
                        T[i]='G';
                }
                if(base==3){
                        T[i]='T';
                }
        }
}
