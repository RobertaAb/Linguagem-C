#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



    double fatorial (int n);
    int main(void){
    int num = 3;
    printf("Digite um n�mero para fatorarmos:\n");
    scanf("%d", &num);
    printf("O Fatorial de %d eh : %.0lf\n",num,fatorial(num));
    return 0;
    }
    double fatorial (int n){
    double fat;
    if (n<=1)
        return (1);
   else{
        return n * fatorial(n-1);
    }
}
