#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main(){
    int A,B, idade, agora;

    printf("Qual é seu ano de nascimento?");
    scanf("%d", &A);
    printf("Em que ano estamos?");
    scanf("%d", &B);
    idade = B - A;
    agora = idade -1;
    printf("Você tem %d anos\n", agora);
    printf("Você fará %d anos neste ano\n", idade);

system("pause");
return 0;
}

