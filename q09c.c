#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

//Quest�o 9
//Fa�a um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou n�o.

int main()
{
    setlocale(LC_ALL,"");

    int idade;

    printf("Insira uma idade: \n\n");
    scanf("%d", &idade);

    if (idade<18){

        printf("\n A pessoa a qual essa idade se refere � menor de idade \n\n");
        }
        else {

            printf("\n A pessoa a qual essa idade se refere � maior de idade \n\n");
            }

    system("pause");
    return 0;
}
