#include <stdio.h>
#define PIED 0.3048
#define LIVRE 0.002205
/*
    1 pied = 0,3048 mètres ;m
    1 gramme = 0,002205 livres ;g
    température en degrés Fahrenheit = 32 + 1,8 × température en degrés Celsius;c
*/


int main(){
   int nb;
   double val;
   char u;
   scanf("%i\n",&nb);
   for(;nb;nb--){
         scanf("%lf",&val);
         scanf(" %c",&u);
         switch(u){
            case 'm':
               printf("%lf p\n",val/PIED);
               break;
            case 'g':
               printf("%lf l\n",val*LIVRE);
               break;
            case 'c':
               printf("%lf f\n",32.0+1.8*val);
               break;
         }        
   }
   return 0;
}
