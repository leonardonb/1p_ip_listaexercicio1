#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

//Quest�o 6
//Sabe-se que, para iluminar de maneira correta os c�modos de uma casa, para cada m2 , deve-se usar 18 W de pot�ncia.
//Fa�a um programa que receba as duas dimens�es de um c�modo (em metros), calcule e mostre a sua �rea (em m2 ) e a
//pot�ncia de ilumina��o que dever� ser utilizada.

int main()
{
    setlocale(LC_ALL,"");

    float largura, comprimento;

    printf("Digite a largura em metros: \n");
    scanf("%f", &largura);

    printf("Digite o comprimento em metros: \n");
    scanf("%f", &comprimento);

    float metroquadrado=largura*comprimento;

    printf("Para %.2f m� ser� necess�rio %.2f W \n", metroquadrado, metroquadrado*18);

    system("pause");
    return 0;
}
