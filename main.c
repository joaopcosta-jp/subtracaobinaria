#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void) {
  
  int bin1,bin2,res, i, dec1 = 0, dec2 = 0;

  printf("\nSUBTRAÇÃO DE NÚMEROS BINARIOS\n");

  printf("\nDigite o primeiro número binario: ");
  scanf("%d", &bin1);

  printf("\nDigite o segundo número binario: ");
  scanf("%d", &bin2);

  printf("\nos numeros foram: %d e %d", bin1,bin2);

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

    printf("\na soma dos numeros decimais é: %d", res);
    return 0;
}