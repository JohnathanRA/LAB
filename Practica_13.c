#include<stdio.h>
#include<string.h>

 int main(){
 	FILE *archivo;
 	char c, cadena[30];
 	int i=0;
 	
 	archivo=fopen("wiki.txt", "w");
 	
 	if(archivo==NULL){
 		printf("el archivo no existe");
 	}
 	
 	fputs("hola mundo, como han estado todos", archivo);
 	
 	fclose(archivo);
 	
 	archivo=fopen("wiki.txt", "r");
 	
 	while(!feof(archivo)){
 		c=fgetc(archivo);
 		if(c!=' '){
 			cadena[i]=c;
 			i++;
 		}
 	}
 	for(i=strlen(cadena);i>-1;i--){
 		printf("%c", cadena[i]);
	}
	
 	fclose(archivo);
 	return 0;
 }
