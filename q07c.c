#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

//Quest�o 7
//Fa�a um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por v�rios pa�ses
//e precisa converter seu dinheiro em d�lares americanos, euros e libras. Sabe-se que as taxas de convers�es s�o R$ 5,50, R$ 5,80, e
//R$ 7,10 respectivamente O programa deve fazer as convers�es e mostr�-las.

int main()
{
    setlocale(LC_ALL,"");

    float real;

    printf("Insira o valor em R$ que voc� tem dispon�vel: \n");
    scanf("%f", &real);

    printf("Voc� possui: %.2f reais, logo: \n", real);
    printf("Voc� possui: %.2f d�lares (cota��o de R$5,30) \n", real/5.30);
    printf("Voc� possui: %.2f euros (cota��o de R$5,80) \n", real/5.80);
    printf("Voc� possui: %.2f libras (cota��o de R$7,10) \n", real/7.10);

    system("pause");
    return 0;
}
