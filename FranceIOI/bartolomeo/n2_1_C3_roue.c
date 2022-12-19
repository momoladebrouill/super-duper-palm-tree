#include <stdio.h>
#define MOD 24
int main(){
   int dec;
   scanf("%i",&dec);
   dec = dec<0 ? MOD+dec%MOD : dec;
   printf("%i",dec%MOD);
}
