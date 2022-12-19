#include <stdio.h>

int main(){
   int larg,end,s=0;
   scanf("%i\n%i",&larg,&end);
   for(int i=end;i<larg+1;i++){
      s+=i*i;
   }
   printf("%i\n",s);
}
