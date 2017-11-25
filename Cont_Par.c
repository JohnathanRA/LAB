#include<stdio.h>
#include<ctype.h>

int main(){
	FILE *archivo;
	archivo=fopen("archivo.txt", "r");
	char letra;
	int i=1, t=0;
	
	if(archivo==NULL){
		printf("El archivo no existe");
		return 0;
	}
	while(!feof(archivo)){
		letra=fgetc(archivo);
		if(letra==' '){
			i++;
		}
		if(isdigit(letra)){
			t++;
		}
	}
	fclose(archivo);
	archivo=fopen("resultado1.txt", "w");
	fprintf(archivo, "son %d palabras", i);
	fclose(archivo);
	archivo=fopen("resultado2.txt", "w");
	fprintf(archivo, "son %d digitos", t);
	fclose(archivo);
	
	return 0;
}
