#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char string[100];
	int i=0;
	FILE *file;
	file=fopen("archivo.txt", "r+");
	if (file==NULL){
		printf("No existe el archivo\n");
		return 0;
	}
	printf("El archivo dice: \n");
	while(!feof(file)){
		fgets(string,100,file);	
	}
	for(i=0;i<strlen(string);i++){
			string[i]=toupper(string[i]);
	}
	fputs('string', file);
	printf("\n%s", string);
	fprintf(file, "\n%s", string);
	fclose(file);
	return 0;
}
