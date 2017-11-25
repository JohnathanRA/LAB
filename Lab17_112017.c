#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
int string[100];
int i=1;
	int b=0;
	int c=0;
	FILE *file;
	file=fopen("archivo.txt", "r");
	if (file==NULL){
		printf("No existe el archivo\n");
		return 0;
	}
	while(!feof(file)){
		c=fgetc(file);	
	if(isdigit(c)){
			b++;	
	}
	if(c==' '){
	i++;	
	}
}
	printf("El total de numeros es: %d \n", b);
	printf("El total de palabras es: %d \n", i);
	fclose(file);
	return 0;	
}
