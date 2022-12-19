#include <stdio.h>

int main(){
   int nb,poid,sum[2];
   sum[0]=sum[1]=0;
   scanf("%i",&nb);
   for(int i=0;i<nb*2;i++){
      scanf("%i", &poid);
      sum[i%2]+=poid;
   }
   printf("L'équipe ");
   printf(sum[0]>sum[1] ? "1":"2");
   printf(" a un avantage\nPoids total pour l'équipe 1 : %i\nPoids total pour l'équipe 2 : %i\n",sum[0],sum[1]);
}
