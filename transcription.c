#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void transcription(char ARN[],int n,char chaine[]){
        int i,mem=0;

        for(i=0;i<=n;i++){
                if(chaine[i]=='A'){
                        ARN[i]='U';
                }
                if(chaine[i]=='C'){
                        ARN[i]='G';
                }
                if(chaine[i]=='T'){
                        ARN[i]='A';
                }
                if(chaine[i]=='G'){
                        ARN[i]='C';
                }
        }
        printf("\n\nVoici la chaine ARN apres la transciption de la chaine mutee\n");
        for(i=0;i<n;i++){
                printf("%c",ARN[i]);
                mem++;
                if(mem==3){
                        printf(" ");
                        mem=0;
                }
        }
        printf("\n");
}