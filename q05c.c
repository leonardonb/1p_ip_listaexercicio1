#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

//Quest�o 5
//Fa�a um programa que receba o valor dos catetos de um tri�ngulo, calcule e mostre o valor da hipotenusa.
//Dica: importe a biblioteca math.h para ter acesso as funcionalidades de potencia��o
//(https://www.tutorialspoint.com/c_standard_library/math_h.htm)

int main()
{
    setlocale(LC_ALL,"");

    float cateto1;
    float cateto2;

    printf("Digite o cateto 01: \n");
    scanf("%f", &cateto1);

    printf("Digite o cateto 02: \n");
    scanf("%f", &cateto2);

    float hipotenusa=pow(cateto1, 2) + pow(cateto2, 2);

    // Aqui foi feita a soma do quadrado dos catetos usando "POW"

    printf("A hipotenusa �: %.2f \n", sqrt(hipotenusa));

    // Aqui foi impresso na tela a raiz quadrada da soma dos catetos, que � por defini��o a hipotenusa, usando "SQRT"

    system("pause");
    return 0;
}
