#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    FILE *archivo;
    
    printf("Base de datos que quieres abrir \n");
    char basededatos[15];
    scanf("%s",basededatos);
    getchar();

    printf("Elige una opcion: \n");
    printf("\t 1 - Crear coleccion  \n");
    printf("\t 2 - Introducir archivo nuevo \n");
    printf("\t 3 - Modificar archivo existente \n");
    printf("\t 4 - Consultar archivo \n");
    printf("Escribe una opcion(1-3): \n");
    char opcion = getchar();
    getchar();
    
    switch(opcion){
        case '1':
            printf("1 - CREAR COLECCION  \n");
            char rutacoleccion[100];
            strcpy(rutacoleccion,"db/");
            strcat(rutacoleccion,basededatos);
            strcat(rutacoleccion,"/");
            printf("Nombre de la nueva coleccion \n");
            char coleccion1[10];
            scanf("%s",coleccion1);
            strcat(rutacoleccion,coleccion1);
            if(mkdir(rutacoleccion,0777)==0){
                printf("Coleccion creada \n");
            }else{
                printf("No se ha podido crear la nueva coleccion \n");
            }
            break;
        case '2':
            printf("INTRODUCIR ARCHIVO NUEVO \n");
            char ruta3[100];
            strcpy(ruta3,"db/");
            strcat(ruta3,basededatos);
            strcat(ruta3,"/");
            printf("Coleccion donde introducirlo \n");
            char coleccion2[10];
            scanf("%s",coleccion2);
            strcat(ruta3,coleccion2);
            strcat(ruta3,"/");
            printf("Nombre del archivo nuevo \n");
            char documento1[10];
            scanf("%s",documento1);
            strcat(ruta3,documento1);
            strcat(ruta3,".json");
            archivo = fopen(ruta3,"w");
            fclose(archivo);
            printf("Archivo nuevo introducido \n");
            break;
        case '3':
            printf("MODIFICAR ARCHIVO EXISTENTE \n");
            char ruta1[100];
            strcpy(ruta1,"db/");
            strcat(ruta1,basededatos);
            strcat(ruta1,"/");
            printf("Coleccion \n");
            char coleccion3[10];
            scanf("%s",coleccion3);
            strcat(ruta1,coleccion3);
            strcat(ruta1,"/");
            printf("Nombre del archivo \n");
            char documento2[10];
            scanf("%s",documento2);
            getchar();
            strcat(ruta1,documento2);
            strcat(ruta1,".json");
            printf("Introduce el texto \n");
            archivo = fopen(ruta1,"w");
            char texto[30];
            scanf("%[^\n]",texto);
            fputs(strcat(texto,"\n"),archivo);
            fclose(archivo);
            printf("texto introducido \n");
            break;
        case '4':
            printf("CONSULTAR ARCHIVO: \n");
            char ruta2[100];
            strcpy(ruta2,"db/");
            strcat(ruta2,basededatos);
            strcat(ruta2,"/");
            printf("Coleccion \n");
            char coleccion[10];
            scanf("%s",coleccion);
            strcat(ruta2,coleccion);
            strcat(ruta2,"/");
            printf("Archivo \n");
            char documento[10];
            scanf("%s",documento);
            strcat(ruta2,documento);
            strcat(ruta2,".json");
            archivo = fopen(ruta2,"r");
            char linea[100];
            while(fgets(linea,100,archivo)!= NULL){
                printf("- %s",linea);
            }
            fclose(archivo);
            break;
        default:
            printf("OPCION NO VALIDA \n");
    }
    printf("Programa finalizado \n");
    return 0;
}