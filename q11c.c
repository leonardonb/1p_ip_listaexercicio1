#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

//Quest�o 11
//Fa�a um programa que receba um n�mero qualquer e informe se este � par ou �mpar.

int main()
{
    setlocale(LC_ALL,"");

    int numero;

    printf("Digite um n�mero qualquer: \n\n");
    scanf("%d", &numero);

    if (numero%2==0){
        printf("\n O n�mero � par \n\n");
    }
        else {
             printf("\n O n�mero � impar \n\n");
            }

    system("pause");
    return 0;
}
