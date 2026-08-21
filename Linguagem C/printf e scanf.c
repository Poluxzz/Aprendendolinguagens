#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define texto "-------------------------------[Teste de psicologia]-----------------------------------------"

int main(){
    printf("%s\n", texto);
    
    system("pause");

    char nome [100];
     int idade = 0;
         printf("Digite seu nome:");
         scanf ("%s", &nome);

         printf("Ola Mestre %s!\n", nome);
         printf("Sou sua IA, e estou aqui para te ajudar a aprender C!\n");
         printf("Digite sua idade mestre %s: ", nome);
         scanf("%d", &idade);

         printf("Fico feliz de receber suas informacoes mestre %s!, siga abaixo com suas informacoes detalhadas\n", nome);
         printf("Nome: %s\n", nome);
         printf("Idade: %d\n", idade);
         
         system("pause");

         printf("Fim do Programa, obrigado por usar minha IA mestre %s! :)\n", nome);



    return 0;
}    
