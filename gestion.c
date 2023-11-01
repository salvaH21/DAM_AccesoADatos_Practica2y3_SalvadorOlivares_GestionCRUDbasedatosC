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
    printf("\t 3 - Buscar elemento \n");
    printf("\t 4 - Eliminar elemento \n");
    printf("Escribe una opcion(1-4): \n");
    char opcion = getchar();
    printf("Has elegido: %c \n",opcion);
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
            printf("Titulo: %s \n",titulo);
            fputs(strcat(titulo,"\n"),archivo);
            fclose(archivo);
            printf("Titulo introducido \n");
            break;
        case '3':
            /*printf("BUSCAR ELEMENTO \n");
            printf("Introduce el titulo que buscas \n");
            archivo = fopen(ruta,"r");
            char titulobuscar[30];
            scanf("%[^\n]",titulobuscar);
            printf("Titulo: %s \n",titulobuscar);
            char lineabuscar[100];
            while(fgets(lineabuscar,sizeof(lineabuscar),archivo)!= NULL){
                //printf("- %s",lineabuscar);
                if(strcmp(titulobuscar,lineabuscar)==0){
                    printf("Juego encontrado \n");
                    printf("- %s",lineabuscar);
                }else{
                    printf("Juego no encontrado \n");
                }
            }
            fclose(archivo);*/
            break;
        case '4':
            printf("ELIMINAR ELEMENTO \n");
            /*archivo = fopen(ruta,"r");
            char fila[100];
            int indice=0;
            while(fgets(fila,100,archivo)!= NULL){
                indice++;
                printf("%i - %s",indice,fila);
            }
            printf("Escribe el indice del elemento que quieres eliminar \n");
            int eleccion = getchar();
            printf("Has elegido: %c \n",eleccion);*/
            //getchar();
            /*indice=0;
            archivo = fopen(ruta,"r");
            while(fgets(fila,100,archivo)!= NULL){
                indice++;
                if(indice==eleccion){
                    //printf("%i - %s",indice,fila);
                    printf("Indice: %i",indice);
                    printf("Eleccion: %c",eleccion);
                }
            }*/
            /*archivo = fopen(ruta,"r");
            for(int i=1;i<=10;i++){
                if(fgets(fila,100,archivo)!= NULL){
                    printf("Con FOR  %i - %s",i,fila);
                    /*if(i==eleccion){
                        printf("%i - %s",i,fila);
                        printf("Indice: %i",i);
                        printf("Eleccion: %c",eleccion);
                    }*/
           /*     }
            }
            printf("Indice: %i \n",indice);
            printf("Eleccion: %c \n",eleccion);
            fclose(archivo);*/
            break;
        default:
            printf("OPCION NO VALIDA \n");
    }
    printf("FIN \n");
    return 0;
}