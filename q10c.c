#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

//Quest�o 10
//Fa�a um programa que receba tr�s n�meros e imprima o maior deles.

int main()
{
    setlocale(LC_ALL,"");

    int n1, n2, n3;

    printf("Digite um n�mero qualquer: \n\n");
    scanf("%d", &n1);

    printf("\n Digite mais um n�mero: \n\n");
    scanf("%d", &n2);

     printf("\n Digite um �ltimo n�mero: \n\n");
    scanf("%d", &n3);

    if (n1>n2){
        if (n1>n3){
        printf("\n O maior n�mero � o: %d \n\n", n1);
            }
        }
        if (n2>n1){
             if (n2>n3){
            printf("\n O maior n�mero � o: %d \n\n", n2);
            }
        }

            if (n3>n1){
                if (n3>n2){
                printf("\n O maior n�mero � o: %d \n\n", n3);
                }
           }

    system("pause");
    return 0;
}
