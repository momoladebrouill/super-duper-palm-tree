#include <stdio.h>

int main(){
   int nb,poid,age,len,hei;
   scanf("%i",&nb);
   for(int i=0;i<nb;i++){
      scanf("%i\n%i\n%i\n%i\n", &poid, &age, &len, &hei);
      printf("%i\n",len*hei+poid);
   }
}
