#include <stdio.h>
#include <stdlib.h>

 ImprimeNumeros (int n, int i){

       printf("%d\n", i);
       if (n>i){
           return ImprimeNumeros(n, i+1);
       }
       else {
           return 0;
       }
   }

int main (){

   int n;
   int i=0;
   printf("Digite um numero: ");
   scanf("%d", &n);
   ImprimeNumeros(n, i);
   system("pause");
   return 0;

}
