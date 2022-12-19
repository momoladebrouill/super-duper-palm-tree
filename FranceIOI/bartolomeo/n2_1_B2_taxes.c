#include <stdio.h>
#include <math.h>

int main(){
   float oldT;
   float newT;
   float price;
   scanf("%f",&oldT);
   scanf("%f",&newT);
   scanf("%f",&price);
   printf("%f",round(price*(1.+newT/100)*100.0/(1.+oldT/100))/100.0);
}
