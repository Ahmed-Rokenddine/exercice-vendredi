#include <stdio.h>
 #include <stdbool.h>
   int main(){
    // props = make any date like this--> //5/9/2012 look like this --> 5-spetembre-2012
     int jour,mois,anne;
        printf("Veileur entrer la date :  ");
             scanf("%d / %d / %d",&jour,&mois,&anne);
                 switch (mois)
                   {
                     case 1 : printf("on est le :  %d-janvier-%d",jour,anne);
                     break;
                     case 2 : printf("on est le :  %d-fevrier-%d",jour,anne);
                     break; 
                     case 3 : printf("on est le :  %d-mars-%d",jour,anne); 
                     break;
                     case 4 : printf("on est le :  %d-avril-%d",jour,anne);
                     break;
                     case 5 : printf("on est le :  %d-Mai-%d",jour,anne); 
                     break;
                     case 6 : printf("on est le :  %d-juin-%d",jour,anne);
                     break;
                     case 7 : printf("on est le :  %d-juillet-%d",jour,anne); 
                     break;
                     case 8 : printf("on est le :  %d-aout-%d",jour,anne); 
                     break; 
                     case 9 : printf("on est le :  %d-septembre-%d",jour,anne); 
                     break;
                     case 10 : printf("on est le :  %d-octobre-%d",jour,anne);
                     break;
                     case 11 : printf("on est le :  %d-novembre-%d",jour,anne);
                     break;
                     default: printf("on est le :   %d-decembre-%d",jour,anne);
                      break;
                     }
                   }
   

