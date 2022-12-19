#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

/*gauche();
droite();
ramasser();
deposer();*/

int main()
{
   for(int i=1;i<=10;i++){
      for(int j=0;j<i;j++){
         droite();
      }
      ramasser();
      for(int j=0;j<i;j++){
         gauche();
      }
      deposer();
  }
    
         
}
