#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void leerArchivo(char path[]){
    FILE *archivo;
    char line[201];

    archivo = fopen(path,"r");
    if(archivo != NULL){
        while(!feof(archivo)){
            //fscanf(archivo,"%s\n", &line);
            fgets(line, 201, archivo);
            printf("linea: %s\n",line);
        }
        fclose(archivo);
    }
}
int main(int argc,char *argv[]){
    leerArchivo("access.log");
}
