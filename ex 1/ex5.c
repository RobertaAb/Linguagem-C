#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main(){
    int n,par, impar;

    printf("Digite um n�mero:\n");
    scanf("%d", &n);
    if (n%2==0){
        printf("o n�mero %d � par\n",n);
    }else{
        printf("o n�mero %d � impar\n", n);
    }
    system("pause");
return 0;
}
