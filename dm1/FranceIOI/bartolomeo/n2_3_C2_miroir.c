#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char ligne[1000];
   int nb;
   scanf("%i\n",&nb);
   for(;nb;nb--){
         scanf("%[^\n]\n",ligne);
         for(int i=strlen(ligne)-1;i+1;i--){
            printf("%c",ligne[i]);
         }
         printf("\n");
   }
   return 0;
}
