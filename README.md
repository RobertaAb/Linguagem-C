# Linguagem-C

#include<math.h>
#include<stdio.h>

int main (){

    float base1, base2, altura3, AreaTriangulo, AreaCirculo, AreaTrapezio, AreaQuadrado, AreaRetangulo, pi;

    pi = 3.14159;
    base1 = 3.0;
    base2 = 4.0;
    altura3 = 5.2;
    AreaTriangulo = (base1 * altura3)/2;
    AreaCirculo = pi* (altura3*altura3);
    AreaTrapezio = ((base1 + base2) / 2) * altura3;
    AreaQuadrado = base2 *base2;
    AreaRetangulo = base1 * base2;

    printf("TRIANGULO = %.3f \n\n", AreaTriangulo);
    printf("CIRCULO = %.3f \n\n", AreaCirculo);
    printf("TRAPEZIO = %.3f \n\n", AreaTrapezio);
    printf("QUADRADO = %.3f \n\n", AreaQuadrado);
    printf("RETANGULO = %.3f \n\n", AreaRetangulo);


return 0;
}
