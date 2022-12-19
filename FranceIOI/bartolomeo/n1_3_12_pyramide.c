#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
   int s=0;
   for(int i=0;i<17;i+=2) s+=(i+1)*(i+1)*(i+1);
   printf("%i\n",s);
}
