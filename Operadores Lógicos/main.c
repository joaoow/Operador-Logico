#include <stdio.h>
#include <stdlib.h>

// Autor: João

int main()
{
   int iJ, iI;
   iJ = 17;
   iI = 60;

   int idade = 0;

   printf("Digite a idade de uma pessoa:\n");
   scanf("%i", &idade);

   if(idade <= iJ)
   {
       printf("A idade informada e de um jovem.\n");
   }else{
       if(idade >= iI){
        printf("A idade e de uma pessoa idosa.\n");

       }else{
           //Se isso for verdade ou se isso for verdade
       if((idade > iJ)||(idade <iI)){

        // A meia-idade se caracteriza por qualquer pessoa que tenha
        //menos de 60 anos e mais de 17
        printf("A idade informada e de uma pessoa de meia-idade.\n");
       }
       }
   }

    return 0;
}
