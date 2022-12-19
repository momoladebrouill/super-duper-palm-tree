//Programme non validé par France IOI, pourtant je respecte la consigne ! :angry:

#include <stdio.h>

// Es-ce que b est dans le segment [a,c] ?
int btw(int a,int b,int c){return a<b && b<c;}


int main(){
	// Bien horrible :
   int nb,xa1,ya1,xb1,yb1,xa2,ya2,xb2,yb2;
   scanf("%i",&nb);
   
   for(int i=0;i<nb;i++){
      scanf("%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n",&xa1,&xb1,&ya1,&yb1,&xa2,&xb2,&ya2,&yb2);
      printf(
      (	
      	(btw(xa1,xa2,xb1) && btw(ya1,ya2,yb1)) // Le point du bas est dans le 1er carré
      		|| 
      	(btw(xa1,xb2,xb1) && btw(ya1,yb2,yb1)) // Le point du haut est dans le 1er carré
      ) ? "OUI\n":"NON\n");
      
   }
}
