// Quest�o 3
// Fa�a um programa que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio,
// calcule e mostre a quantidade de sal�rios m�nimos que esse funcion�rio ganha.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");

    float salariorec;


    printf("Digite o valor do sal�rio recebido: \n");
    scanf("%f", &salariorec);

    printf("A pessoa que informou o sal�rio recebe: %.1f sal�rio(s) m�nimo(s) \n", (salariorec/1212));

    system("pause");
    return 0;
}
