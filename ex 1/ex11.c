#include <stdio.h>
#include <stdlib.h>
//Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.
int main()
{
    int i,num,soma;
    printf("Calculo da soma dos n primeiros numeros naturais.\n\n");

    printf("Digite o valor de n:");
    scanf("%d",&num);

    soma=0;
    i=0;
    for(i=1; i<=num; i++)
        soma=soma+i;

    printf(" A soma dos %d primeiros numeros naturais eh = %d", num,soma);
    return 0;
}
