#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

int a, b, c;

printf("Digite o primeiro num:");
scanf("%d",&a);
printf("Digite o segundo num:");
scanf("%d",&b);
printf("Digite o terceiro num:");
scanf("%d",&c);

if (a > c){
    int tmp =c;
    c=a;
    a=tmp;
}
if (a > b){
    int tmp =b;
    b=a;
    a=tmp;
}
if (b > c){
    int tmp =c;
    c=b;
    b=tmp;
}

printf("A ordem crescente de %d, %d, %d eh: ", a, b, c);

system("pause");
return 0;


}


