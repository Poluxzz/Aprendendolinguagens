#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Anime{
    char nome [100];
    char genero [100];
    int episodios;
    float nota;

};

int main() {
    int opcao;
    
    printf("===== Catalogo de Animes =====\n");
    printf("1. Adicionar animes\n");
    printf("2. Listar animes\n");
    printf("3. Buscar animes\n");
    printf("4. Animes + 18\n");
    printf("5. Sair do programa\n");



    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
        if (opcao == 1) {
        printf("Adicionar animes\n");
        }

        else if (opcao == 2) {
        printf("Listar animes\n");
    }
        else if (opcao == 3) {
        printf("Buscar animes\n");
    }
        else if (opcao == 4) {
      printf("Animes +18\n");
    }
        else if (opcao == 5) {
        printf("Sair do programa\n");
    }
        else {
        printf("Comando invalido\n");
        }
    
    
 return 0;
        
}