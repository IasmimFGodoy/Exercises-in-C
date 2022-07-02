#include <stdio.h>
#include <stdlib.h>

void exibeSeparacao(){
    printf("-------------------\n");
}

int calculaAnoDeNascimento(int idade){
    //int calcIdade = 2022 - idade;
    return 2022 - idade;
}

int main(){
    int idade = 0,
        ano = 0;

    printf("Digite dua idade... ");
    scanf("%d", &idade);

    exibeSeparacao();

    ano = calculaAnoDeNascimento(idade);

    printf("Seu ano de nascimento é... : %d", ano);

    return 0;
}