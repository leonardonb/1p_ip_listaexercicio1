#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

/* Quest�o 15
Fa�a um programa que receba tr�s n�meros e imprima-os em ordem crescente. */

    int idade;

    setlocale(LC_ALL,"");

    int A, B, C, X;

    scanf("%d%d%d",&A, &B, &C);

    if (A > B)
    {
        X = A; A = B; B = X;
        }
        if (A > C)
        {
            X = A; A = C; C = X;
            }
            if (B > C)
            {
                X = B; B = C; C = X;
                }

    printf("Em ordem crescente, os n�meros digitados foram: %d, %d, %d\n", A, B, C);

    system("pause");
    return 0;
}
