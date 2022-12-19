#include <stdio.h>
#include <stdlib.h>

int find(int ind, int * tabl, int len){
   for(int i=0;i<len;i++){
      if(*(tabl+i)==ind){
         return i;
      }
   }
   return 0;
}

int main(){
   int len;
   scanf("%i\n",&len);
   int * tabl = malloc(len*sizeof(int));
   for(int i=0;i<len;i++){
      scanf("%i\n",tabl+i);
   };
   for(int i=0;i<len;i++){
      printf("%i\n",find(i,tabl,len));
   };
   return 0;
}
