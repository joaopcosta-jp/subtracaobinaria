#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void) {
  
//=================================VARIÁVEIS=========================================
  int bin1; 
  int bin2; 
  int res; 
  int i;
  int dec1 = 0; 
  int dec2 = 0;
  int resto[10];
//====================================================================================

  printf("\nSUBTRAÇÃO DE NÚMEROS BINÁRIOS\n");

  printf("\nDigite o primeiro número binário: ");
  scanf("%d", &bin1);
//Obtem o primeiro número a ser subtraido.
  printf("\nDigite o segundo número binário: ");
  scanf("%d", &bin2);
//Obtem o segundo número a ser subtraido.
  printf("\nOs números foram: %d e %d", bin1,bin2);

      for(i = 0; bin1 > 0; i++)//Converte o primeirno numero para decimal.
    {
        dec1 = dec1 + pow(2, i) * (bin1 % 10);
        bin1 = bin1 / 10;
    }

      for(i = 0; bin2 > 0; i++)//Converte o segundo número para decimal.
    {
        dec2 = dec2 + pow(2, i) * (bin2 % 10);
        bin2 = bin2 / 10;
    }    

    res = dec1 - dec2;//Executa a subtração dos números em valor decimal
    
    for (i = 0; res > 0; i++)//Converte o resultado da subtração de volta para binário no vetor resto.
    {    
        resto[i] = res % 2;    
        res = res / 2;  
    } 
    
        printf("\nO RESULTADO DA SUBTRAÇÃO É: ");

    for (i = i -1; i >= 0 ; i--)
    {    
        printf("%d", resto[i]);//Exibe os valores da divisão guardados no vetor na ordem inversa.
    }  

    return 0;
}