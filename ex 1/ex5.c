#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main(){
    int n,par, impar;

    printf("Digite um número:\n");
    scanf("%d", &n);
    if (n%2==0){
        printf("o número %d é par\n",n);
    }else{
        printf("o número %d é impar\n", n);
    }
    system("pause");
return 0;
}
