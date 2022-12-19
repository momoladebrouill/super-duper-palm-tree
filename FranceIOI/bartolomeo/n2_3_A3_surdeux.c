#include <stdio.h>
#include <string.h>
int main()
{
   int nb;
   scanf("%i\n",&nb);
   char vers[201];
   for(int i=0;i<nb;i++){
      scanf("%[^\n]\n", vers);
      if(i%2==0){
         printf("%s\n", vers);
      }
   }
   
}
