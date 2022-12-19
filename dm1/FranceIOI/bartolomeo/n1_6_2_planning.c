#include <stdio.h>
#include <math.h>
int main(){
   int pos,nb,s=0,vil;
   scanf("%i\n%i",&pos,&nb);
   for(int i=0;i<nb;i++){
      scanf("%i",&vil);
      s+=abs(pos-vil)<=50;
   }
   printf("%i",s);
}
