#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
    int n1, n2, opcao;
    n1 = n2 = 0;
    opcao = 6;
    do
    {
        printf("\n Entre com a operacao desejada:\n(1).. Divisao:\n(2)..Resto da divisao:\n(3)..Adicao\n(4)..Multiplicacao:\n");
        scanf("%d", &opcao);
        if ((opcao == 1 ) || (opcao == 2))
        {
            printf("Digite o primeiro numero: \n ");
            scanf("%d", &n1);
            do
            {
                printf("Digite o segundo numero: \n ");
                scanf("%d", &n2);
                if (n2==0)
                    printf("Imposs�vel realizar divisao por zero !\n");
            }while (n2==0);
        }
        else if ((opcao == 3 ) || (opcao == 4))
        {
            printf("Digite o primeiro numero: \n ");
            scanf("%d", &n1);
            printf("Digite o segundo numero: \n ");
            scanf("%d", &n2);
        }
        switch (opcao)
        {
        case 1:
            printf("%d / %d = %d \n", n1, n2, (n1/n2));
            break;
        case 2:
            printf("%d resto %d = %d \n", n1, n2, (n1%n2));
            break;
        case 3:
            printf("%d + %d = %d \n", n1, n2, (n1+n2));
            break;
        case 4:
            printf("%d x %d = %d \n", n1, n2, (n1*n2));
            break;
        default:
            printf("\n Opera��o impossivel de ser realizada!!\n");
        }
        system("PAUSE");
        break;
    }while (opcao!=0);
}
