#include <stdio.h>

int main(){
   int nb,min,max,v;
   scanf("%i\n%i\n%i",&nb,&min,&max);
   for(int i=0;i<nb;i++){
      scanf("%i",&v);
      if(v<min || v>max){
         printf("Alerte !!");
         return 0;
      }else{
         printf("Rien à signaler\n");
      }
   }
}
