#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char ligne[100];
   scanf("%[^\n]",ligne);
   char c;
   for(int i=0;c=ligne[i];i++){
         printf("%c",c==' ' ? '_':c);
   }
   return 0;
}
