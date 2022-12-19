#include <stdio.h>

int ligne(int l,char x){
   for(;l;l--){
      printf("%c",x);
   }
   printf("\n");
   return 0;
}

int carre(int w,int h){
   ligne(w,'#');
   for(h-=2;h;h--){
      printf("%c",'#');
      for(int i=0;i<w-2;i++)printf("%c",' ');
      printf("%s",w>1 ? "#\n":"\n");
   }
   ligne(w,'#');
   return 0;
}

int triangle(int haut){
   for(int i=0;i<haut-1;i++){
      for(int j=0;j<=i;j++){
         printf("%c",j!=0 && j!=i ? ' ':'@');
      }
      printf("\n");
   }
   ligne(haut,'@');
   return 0;   
}

int main(){
   int l,w,h,haut;
   scanf("%i\n%i\n%i\n%i",&l,&w,&h,&haut);
   ligne(l,'X');
   printf("\n");
   carre(h,w);
   printf("\n");
   triangle(haut);
   return 0;
}
