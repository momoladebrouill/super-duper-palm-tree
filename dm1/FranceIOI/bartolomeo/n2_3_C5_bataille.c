#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WIN(x) printf("%c\n%i\n",x, equs);good=0; 
int main(){
    char j1[52];
    char j2[52];
    scanf("%[^\n]\n",j1);
    scanf("%[^\n]",j2);
    int equs = 0,
   i1 = 0,
   i2 = 0;
   int good = 1;
    while(good) {
      if (j1[i1]==0 && j2[i2]==0){
         WIN('=');
      }else if(j1[i1]==0){
         WIN('2');
      }else if(j2[i2]==0){
         WIN('1');
      }else if (j1[i1] > j2[i2]) {
         WIN('2');
      } else if (j1[i1] < j2[i2]) {
         WIN('1');
      }
      i1++;
      i2++;
      equs++;
    }
    return 0;
}
