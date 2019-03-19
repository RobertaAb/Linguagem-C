#include<stdio.h>
int main()
{
int num = 0;
printf(" Calculo dos quadrados de uma sequencia de numeros \n \n \n");
printf("Digite uma sequencia de numeros e logo voce recebera o quadrado: \n");
scanf("%d", &num);
do{
printf(" O quadrado de %d eh %d\n", num, num*num);
scanf("%d", &num);
}while(num!=0);
return 1;
}

