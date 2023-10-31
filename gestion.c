#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    FILE *archivo;
    char basededatos[] = "lista";
    
    //MENU
    printf("Con que quieres trabajar? Juegos o peliculas? \n");
    char nombrearchivo[10];
    scanf("%s",nombrearchivo);
    printf("Quieres trabajar con: %s \n",nombrearchivo);
    getchar();
    char ruta[100];
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
    getchar();
    
    switch(opcion){
        case '1':
            printf("TITULOS: \n");
            archivo = fopen(ruta,"r");
            char linea[1024];
            while(fgets(linea,sizeof(linea),archivo)!= NULL){
                printf("- %s",linea);
            }
            break;
        case '2':
            printf("INTRODUCIR ELEMENTO \n");
            printf("Introduce el titulo \n");
            archivo = fopen(ruta,"a");
            char titulo[30];
            scanf("%[^\n]",titulo);
            printf("Titulo: %s \n",titulo);
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
    }
    printf("FIN \n");
    return 0;
}