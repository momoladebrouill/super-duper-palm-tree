#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int nbl,nbm;
   char mot[100];
   int *tabl=calloc(100,sizeof(int));
   scanf("%i\n%i",&nbl,&nbm);
   for(;nbl;nbl--){
         for(int i=0;i<nbm;i++){
            scanf("%s",mot);
            tabl[strlen(mot)-1]++;
         }
      }
      for(int i=0;i<100;i++){
         if(tabl[i]){
            printf("%i : %i\n",i+1,tabl[i]);
         }
      }
   
   return 0;
}
