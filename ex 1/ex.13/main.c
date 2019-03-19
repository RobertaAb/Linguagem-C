#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Dados um inteiro x e um inteiro não-negativo n, calcular x n.
int main(void)
{
    int x, n;

    printf("Calculo de potencias\n\n\n");

    printf("Digite um numero inteiro: \n\n");
    scanf("%d", &x);

    printf("Digite um numero um inteiro nao-negativo: \n\n");
    scanf("%d", &n);

      printf("O valor de %d elevado a %d = %d", x, n, pow (x,n));

    return 0;
}
