#include "picture.h"

void menu(){
printf("\nPROGRAMA GERADOR DE OBRA DE ARTE:\n"
"=================================\n"
"Escolha o tipo de figura basica a ser usada para criar a obra:\n"
"1 - Asterisco simples.\n"
"2 - Simbolo de soma com asteriscos.\n"
"3 - Letra X com asteriscos.\n"
"4 - Figuras aleatorias.\n"
"5 - Losango.\n"
"6 - Sair.\n"
"=================================\n");
}

void tracejador(char picture[][80]){
    
    for (short i = 1; i < 19; i++){
        for (short j = 1; j < 79; j++) {
            strcpy(&picture[i][j], " ");
        }
    }

    for (short i = 0; i < 80; i++){
        strcpy(&picture[0][i], "-");
        strcpy(&picture[19][i], "-");
    }
    
    for (short j = 0; j < 80; j++) {
        strcpy(&picture[j][0], "|");
        strcpy(&picture[j][79], "|");
    }

};

void mostra_tela(char picture[][80]){
    for (short i = 0; i < 20; i++){
        printf("\n");
        for (short j = 0; j < 80; j++){
            printf("%c", picture[i][j]);
        }
    }     
};

void estrela(char picture[][80], int qtd_figuras){
    srand (time(NULL));
    for (size_t i = 0; i < qtd_figuras; i++){
        int random_position_i = (rand() % 80), random_position_j = (rand() % 20);
        

        if(!strcmp(&picture[random_position_i][random_position_j], " "), " "){
            strcpy(&picture[random_position_i][random_position_j], "*");
        }
    }
};

void mais_cruz(char picture [][80], int qtd_figuras);
void x(char picture [][80], int qtd_figuras);
void losango(char picture [][80], int qtd_figuras);
