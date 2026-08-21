#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int idade;

    char sexualidade[100];
    char classificacaoidade[100];
    char grupo[100];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua sexualidade: ");
    scanf("%s", sexualidade);

    printf("Calculando...\n");


    // Verificando a idade

    if (idade >= 18) {

        strcpy(classificacaoidade,
               "Maior de idade");

    } else {

        strcpy(classificacaoidade,
               "Menor de idade");

    }


    // Verificando a sexualidade

    if (strcmp(sexualidade, "heterossexual") == 0) {

        strcpy(grupo, "Voce e heterossexual");

    }
    else if (

        strcmp(sexualidade, "homossexual") == 0 ||
        strcmp(sexualidade, "bissexual") == 0 ||
        strcmp(sexualidade, "pansexual") == 0 ||
        strcmp(sexualidade, "assexual") == 0 ||
        strcmp(sexualidade, "demissexual") == 0 ||
        strcmp(sexualidade, "polissexual") == 0 ||
        strcmp(sexualidade, "sapiossexual") == 0 ||
        strcmp(sexualidade, "queer") == 0 ||
        strcmp(sexualidade, "arromantico") == 0 ||
        strcmp(sexualidade, "arromantica") == 0 ||
        strcmp(sexualidade, "arromantique") == 0
        

    ) {

        strcpy(grupo, "Voce faz parte do grupo LGBTQIA+");

    }
    else {

        strcpy(grupo, "Sexualidade nao encontrada");

    }


    // Resultado final

    printf(
        "\nVoce tem %d anos, voce e %s e %s\n", idade, classificacaoidade, grupo);

    return 0;
}