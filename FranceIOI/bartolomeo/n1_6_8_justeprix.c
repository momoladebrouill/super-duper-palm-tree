#include <stdio.h>
#include <math.h>
int main(){
   int nb,mini=1,vil,min;
   scanf("%i",&nb);
   for(int i=0;i<nb;i++){
      scanf("%i",&vil);
      if(vil<=min){
         mini=i;
         min=vil;
      }
   }
   printf("%i",mini+1);
}
