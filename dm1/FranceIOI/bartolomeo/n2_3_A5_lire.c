#include <stdio.h>
#include <string.h>
int main()
{
   int nb,len=0,cl;
   scanf("%i\n",&nb);
   char vers[1000];
   for(int i=0;i<nb;i++){
      scanf("%[^\n]\n", vers);
      cl=strlen(vers);
      if(len<cl){
         printf("%s\n", vers);
         len=cl;
      }
   }
}
