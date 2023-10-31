#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    FILE *archivo;
    char basededatos[] = "lista";
    
    //MENU
    printf("Con que quieres trabajar? Juegos o peliculas? \n");
    char nombrearchivo[] = getchar();
    printf("%s \n",nombrearchivo);
    /*char ruta[100];
    strcpy(ruta,basededatos);
    strcat(ruta,"-");
    strcat(ruta,nombrearchivo);
    strcat(ruta,".txt");
    
    printf("Elige una opcion: \n");
    printf("\t 1 - Ver lista \n");
    printf("\t 2 - Introducir elemento \n");
    printf("\t 3 - Eliminar elemento \n");
    printf("\t 4 - Modificar elemento \n");
    printf("Escribe una opcion(1-4): \n");
    char opcion = getchar();
    printf("Has elegido: %c \n",opcion);
    
    switch(opcion){
        case '1':
            printf("LISTA \n");
            break;
        case '2':
            printf("INTRODUCIR ELEMENTO \n");
            printf("Introduce el titulo \n");
            archivo = fopen(ruta,"a");
            char *titulo = argv[2];
            fputs(strcat(titulo,"\n"),archivo);
            fclose(archivo);
            printf("Titulo introducido \n");
            break;
        case '3':
            printf("ELIMINAR ELEMENTO \n");
            break;
        case '4':
            printf("MODIFICAR ELEMENTO \n");
            break;
        default:
            printf("OPCION NO VALIDA \n");
    }*/
    printf("FIN \n");
    return 0;
}