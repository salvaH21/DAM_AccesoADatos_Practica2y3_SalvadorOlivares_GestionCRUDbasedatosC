#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    FILE *archivo;
    char basededatos[] = "lista";
    
    //MENU
    printf("Con que quieres trabajar? \n");
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
    printf("Escribe una opcion(1-2): \n");
    char opcion = getchar();
    getchar();
    
    switch(opcion){
        case '1':
            printf("TITULOS: \n");
            archivo = fopen(ruta,"r");
            char linea[100];
            while(fgets(linea,100,archivo)!= NULL){
                printf("- %s",linea);
            }
            fclose(archivo);
            break;
        case '2':
            printf("INTRODUCIR ELEMENTO \n");
            printf("Introduce el titulo \n");
            archivo = fopen(ruta,"a");
            char titulo[30];
            scanf("%[^\n]",titulo);
            fputs(strcat(titulo,"\n"),archivo);
            fclose(archivo);
            printf("Titulo introducido \n");
            break;
        default:
            printf("OPCION NO VALIDA \n");
    }
    printf("Programa finalizado \n");
    return 0;
}