#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    int n, contador, total;
    contador = 0;
    printf ("Digite um n�mero para calcular a tabuada:\n");
    scanf("%d",&n);
    while (contador<10) {
        contador ++;
        printf("\n %d x %2d = %4d \n",n,contador,n*contador);

    }
    printf("\n\n\n");
    system("Pause");
    return 0;

}

