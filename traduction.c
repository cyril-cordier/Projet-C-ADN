#include <string.h>
#include <stdio.h>

void traduction(char ARN[],int n, char prot[]){
        int i,mem=0;


        strcpy(prot, "");

        for(i=0;i<=n;i++){
                if(ARN[i]=='A'){
                        if(ARN[i+1]=='A'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='G'){
                                        strcat (prot, "Lys ");
                                }
                                if(ARN[i+2]=='C' || ARN[i+2]=='U'){
                                        strcat (prot, "Asn ");
                                }
                        }
                        if(ARN[i+1]=='C'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='C' || ARN[i+2]=='G' || ARN[i+2]=='U'){
                                        strcat (prot, "Thr ");
                                }
                        }
                        if(ARN[i+1]=='G'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='G'){
                                        strcat (prot, "Arg ");
                                }
                                if(ARN[i+2]=='C' || ARN[i+2]=='U'){
                                        strcat (prot, "Ser ");
                                }
                        }
                        if(ARN[i+1]=='U'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='C' || ARN[i+2]=='U'){
                                        strcat (prot, "Ile ");
                                }
                                if(ARN[i+2]=='G'){
                                        strcat (prot, "Met ");
                                }
                        }
                }
                if(ARN[i]=='C'){
                        if(ARN[i+1]=='A'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='G'){
                                        strcat (prot, "Gln ");
                                }
                                if(ARN[i+2]=='C' || ARN[i+2]=='U'){
                                        strcat (prot, "His ");
                                }
                        }
                        if(ARN[i+1]=='C'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='C' || ARN[i+2]=='G' || ARN[i+2]=='U'){
                                        strcat (prot, "Pro ");
                                }
                        }
                        if(ARN[i+1]=='G'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='C' || ARN[i+2]=='G' || ARN[i+2]=='U'){
                                        strcat (prot, "Arg ");
                                }
                        }
                        if(ARN[i+1]=='U'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='C' || ARN[i+2]=='G' || ARN[i+2]=='U'){
                                        strcat (prot, "Leu ");
                                }
                        }
                }
                if(ARN[i]=='G'){
                        if(ARN[i+1]=='A'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='G'){
                                        strcat (prot, "Glu ");
                                }
                                if(ARN[i+2]=='C' || ARN[i+2]=='U'){
                                        strcat (prot, "Asp ");
                                }
                        }
                        if(ARN[i+1]=='C'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='C' || ARN[i+2]=='G' || ARN[i+2]=='U'){
                                        strcat (prot, "Ala ");
                                }
                        }
                        if(ARN[i+1]=='G'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='C' || ARN[i+2]=='G' || ARN[i+2]=='U'){
                                        strcat (prot, "Gly ");
                                }
                        }
                        if(ARN[i+1]=='U'){
                                if(ARN[i+2]
=='A' || ARN[i+2]=='C' || ARN[i+2]=='G' || ARN[i+2]=='U'){
                                        strcat (prot, "Val ");
                                }
                        }
                }
                if(ARN[i]=='U'){
                        if(ARN[i+1]=='A'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='G'){
                                        strcat (prot, "STP ");
                                }
                                if(ARN[i+2]=='C' || ARN[i+2]=='U'){
                                        strcat (prot, "Tyr ");
                                }
                        }
                        if(ARN[i+1]=='C'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='C' || ARN[i+2]=='G' || ARN[i+2]=='U'){
                                        strcat (prot, "Ser ");
                                }
                        }
                        if(ARN[i+1]=='G'){
                                if(ARN[i+2]=='A'){
                                        strcat (prot, "STP ");
                                }
                                if(ARN[i+2]=='C' || ARN[i+2]=='U'){
                                        strcat (prot, "Cys ");
                                }
                                if(ARN[i+2]=='G'){
                                        strcat (prot, "Trp ");
                                }
                        }
                        if(ARN[i+1]=='U'){
                                if(ARN[i+2]=='A' || ARN[i+2]=='G'){
                                        strcat (prot, "Leu ");
                                }
                                if(ARN[i+2]=='C' || ARN[i+2]=='U'){
                                        strcat (prot, "Phe ");
                                }
                        }
                }
        i=i+2;
        }
printf("%s\n", prot);

        /*printf("\n\nVoici la chaine ARN apres la traduction de la chaine mutee\n");
        for(i=0;i<n;i++){
                printf("%c",PROT[i]);
                mem++;
                if(mem==3){
                        printf(" ");
                        mem=0;
                }
        }
        printf("\n");*/
}