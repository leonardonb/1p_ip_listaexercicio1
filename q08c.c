#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

//Quest�o 8
//Fa�a um programa que receba uma hora (uma vari�vel para hora e outra para minutos), calcule e mostre: a) a hora digitada convertida
//em minutos; b) o total dos minutos, ou seja, os minutos digitados mais a convers�o anterior; c) o total dos minutos convertidos em
//segundos.

int main()
{
    setlocale(LC_ALL,"");

    int hora, minuto;

    printf("Insira a hora: \n");
    scanf("%d", &hora);

    printf("Insira os minutos: \n");
    scanf("%d", &minuto);

    printf("a: O valor que voc� digitou nas horas representa: %d minutos \n", hora*60);
    printf("b: O valor que voc� digitou em horas, somado ao valor que voc� digitou em minutos d� um total de: %d minutos \n", (hora*60)+minuto);
    printf("c: O valor que voc� digitou em horas, somado ao valor que voc� digitou em minutos d�um total de: %d segundos \n", ((hora*60)+minuto)*60);

    system("pause");
    return 0;
}
