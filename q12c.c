#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

/* Quest�o 12
Fa�a um programa que leia tr�s n�meros reais como coeficientes de um polin�mio do segundo grau. Calcule as ra�zes da fun��o usando a
f�rmula de bh�skara. Dica: importe a biblioteca math.h para ter acesso as funcionalidades de potencia��o */

    int idade;

    setlocale(LC_ALL,"");

    float A, B, C, delta, x1, x2;

    scanf("%f%f%f",&A, &B, &C);

    if (A!=0){
        delta=(B*B)-4*A*C;
        if (delta==0){
            x1 = (-B+sqrt(delta))/(2*A);
            printf("Delta � igual a 0\n");
            printf("x1 e x2 = %.2f\n", x1);
        }
            else{
                    if(delta>0){
                x1 =(-B+sqrt(delta))/(2*A);
                x2 = (-B-sqrt(delta))/(2*A);
                printf("Sendo delta maior que 0 \n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
                    }
                        else {
                            printf("Delta menor que 0 \n");
                }
            }
        }
            else{
                printf("N�o � uma equa��o de segundo grau");
            }

    system("pause");
    return 0;
}
