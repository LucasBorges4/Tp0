#include "picture.h"

int main(void){
    char picture[20][80];
    
    tracejador(picture);
    mostra_tela(picture);

    while (true){
        int entrada, qtd_figuras;
        menu();
        printf("Escolha um opção dentre as que estão abaixo\n=> ");
        scanf("%d", &entrada);
        if (entrada == 1);
        if (entrada == 2);
        if (entrada == 3);
        if (entrada == 4);
        if (entrada == 5);
        if (entrada == 6) break;
        printf("\nDigite a quantidade de figuras (menor ou igual a zero para aleatorio):\n=>");
        scanf("%d", &qtd_figuras);
    }

    return 0;
}