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

  printf("\nDigite o segundo número binário: ");
  scanf("%d", &bin2);

  printf("\nOs números foram: %d e %d", bin1,bin2);

      for(i = 0; bin1 > 0; i++)
    {
        dec1 = dec1 + pow(2, i) * (bin1 % 10);
        bin1 = bin1 / 10;
    }

      for(i = 0; bin2 > 0; i++)
    {
        dec2 = dec2 + pow(2, i) * (bin2 % 10);
        bin2 = bin2 / 10;
    }    

    res = dec1 - dec2;
    
    for (i = 0; res > 0; i++)
    {    
        resto[i] = res % 2;    
        res = res / 2;  
    } 
    
        printf("\nO RESULTADO DA SUBTRAÇÃO É: ");

    for (i = i -1; i >= 0 ; i--)
    {    
        printf("%d", resto[i]);
    }  

    return 0;
}