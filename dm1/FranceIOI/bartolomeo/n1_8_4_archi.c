// Ne passe pas tous les tests, j'ai beau chercher, je ne trouve pas la condition qui les satisfaits tous.

#include <stdio.h>

int main(){
   int nb,h=0,s=0;
   scanf("%i",&nb);
   while(s+h*h<nb){
      h++;
      s+=h*h;
      
   };
   printf("%i\n%i",h,s);
}
