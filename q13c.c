#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//Parte do aprendizado de Leonardo Nunes na disciplina de introdu��o � programa��o, no Curso de Ci�ncia da Computa��o - UFAPE, 2022

/* Quest�o 13
Leia a idade e o tempo de servi�o de um trabalhador e escreva se ele pode ou n�o se aposentar. As condi��es para aposentadoria s�o:
a) ter pelo menos 65 anos, b) ou ter trabalhado pelo menos 30 anos, c) ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

    setlocale(LC_ALL,"");

    int idade, temposerv;

    printf("Digite a idade\n", &idade);
    scanf("%d", &idade);

    printf("Digite o tempo de servi�o em anos\n", &temposerv);
    scanf("%d", &temposerv);


    if (idade>=60 && idade<65 && temposerv>=25){
        printf("Aposentado por idade + tempo de servi�o\n\n");
    }
    else if (idade>=65){
        printf("Aposentado por idade\n\n");
    }
    else if (temposerv>=30){
        printf("Aposentado por tempo de servi�o\n\n");
    }
    else {
        printf("Ainda n�o tem idade para se aposentar\n\n");
    }

 system("pause");
 return 0;
}
