#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

/* Quest�o 14
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
categoria - idade Infantil A - 5 a 7 Infantil B - 8 a 10 Juvenil A - 11 a 13 Juvenil B - 14 a 17 S�nior - >18 */

    int idade;

    setlocale(LC_ALL,"");

    scanf("%d", &idade);


    if (idade<=7){
        printf("Infantil A\n");
    }
    else if (idade>7 && idade<=10){
        printf("Infantil B\n");
    }
    else if (idade>10 && idade<=13){
        printf("Juvenil A\n");
    }
    else if (idade>14 && idade<=17){
        printf("Juvenil B\n");
    }
    else {
        printf("S�nior\n");
    }

 system("pause");
 return 0;
}
