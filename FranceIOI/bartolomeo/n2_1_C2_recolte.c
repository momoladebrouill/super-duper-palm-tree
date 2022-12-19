#include <stdio.h>

int main(){
   int nbPersonnes,nbFruits;
   scanf("%i",&nbPersonnes);
   scanf("%i",&nbFruits);
   printf(nbFruits%nbPersonnes  ? "non":"oui");
}
