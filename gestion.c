#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    //MENU
    printf("Lista de juegos \n");
    printf("Elige una opcion: \n");
    printf("\t 1 - Ver lista de juegos \n");
    printf("\t 2 - Introducir juego \n");
    printf("\t 3 - Eliminar juego \n");
    printf("\t 4 - Modificar juego \n");
    printf("Escribe una opcion(1-4): \n");
    char opcion = getchar();
    printf("Has elegido: %c \n",opcion);
    
    switch(opcion){
        case '1':
            printf("LISTA \n");
            break;
        case '2':
            printf("INTRODUCIR JUEGO \n");
            break;
        case '3':
            printf("ELIMINAR JUEGO \n");
            break;
        case '4':
            printf("MODIFICAR JUEGO \n");
            break;
        default:
            printf("OPCION NO VALIDA \n");
    }
    printf("FIN \n");
    return 0;
}