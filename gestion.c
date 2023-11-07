#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    FILE *archivo;
    
    printf("Base de datos \n");
    char basededatos[15];
    scanf("%s",basededatos);
    printf("Coleccion \n");
    char coleccion[10];
    scanf("%s",coleccion);
    printf("Documento \n");
    char documento[10];
    scanf("%s",documento);
    //printf("Quieres trabajar con: %s \n",documento);
    getchar();
    char ruta[100];
    strcpy(ruta,basededatos);
    strcat(ruta,"/");
    strcat(ruta,coleccion);
    strcat(ruta,"/");
    strcat(ruta,documento);
    strcat(ruta,".json");
    
    printf("La ruta es: %s \n",ruta);
    
    
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
            printf("Introduce el texto \n");
            archivo = fopen(ruta,"a");
            char texto[30];
            scanf("%[^\n]",texto);
            fputs(strcat(texto,"\n"),archivo);
            fclose(archivo);
            printf("texto introducido \n");
            break;
        default:
            printf("OPCION NO VALIDA \n");
    }
    printf("Programa finalizado \n");
    return 0;
}