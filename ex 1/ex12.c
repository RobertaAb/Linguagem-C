//Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.
#include<stdio.h>
int main()
{
    int i,n,impar;


    printf(" Gerador de numeros impares \n \n \n");
    printf("Digite o valor de n:");
    scanf("%d", &n);


    i=0;
    impar=1;

    printf("Os %d primeiros impares sao: \n", n);
    while (i < n )
    {
        printf("%d\n", impar);
        impar = impar + 2;
        i = i +1;

    }
    return 0;
}
