#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int transform(int x){
   switch(x){
      case 1: return 2;
      case 2: return 1;
      case 3: return 3;
      case 4: return 5;
      case 5: return 4 ;
      default : return 0;
   }
}

int main(){
   int qqty;
   scanf("%i",&qqty);
   int *ret=malloc(qqty*sizeof(int));
   for(int i=0;i<qqty;i++){
      scanf("%i",ret+i+1);
   }
   for(int i=qqty;i;i--){
      printf("%i\n",transform(ret[i]));
   }
}
