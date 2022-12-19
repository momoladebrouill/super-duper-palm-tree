#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char ligne[1000];
   char lettre,c;
   int nb,s=0;
   scanf("%c\n%i\n",&lettre,&nb);
   for(;nb;nb--){
         scanf("%[^\n]\n",ligne);
         for(int i=0;(c=ligne[i]);i++){
            s+=(c==lettre);
         }
   }
   printf("%i\n",s);
   return 0;
}
