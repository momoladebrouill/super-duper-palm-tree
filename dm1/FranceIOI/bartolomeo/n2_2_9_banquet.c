#include <stdio.h>
#include <stdlib.h>
#define xorswap(a,b) temp=a;a=b;b=temp;

int main(){
   int nbpos,nbchanges,pos1,pos2,temp;
   scanf("%i\n%i",&nbpos,&nbchanges);
   int * plan = malloc(nbpos*sizeof(int));
   
   for(int i=0;i<nbpos;i++)scanf("%i",&plan[i]);
   
   for(int i=0;i<nbchanges;i++){
      scanf("%i",&pos1);
      scanf("%i",&pos2);
      temp=plan[pos1];
      plan[pos1]=plan[pos2];
      plan[pos2]=temp;  
   }
   
   for(int i=0;i<nbpos;i++)printf("%i\n",plan[i]);
   return 0;
}
