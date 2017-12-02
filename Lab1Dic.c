#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
int main(){
char aux[50];
int i=0;
	int c=0;
	FILE *file;
	file=fopen("archivo.txt", "r");
	if (file==NULL){
		printf("No existe el archivo\n");
		return 0;
	}
	while(!feof(file)){
	c=fgetc(file);	
	if(c!=' '){
	aux[i]=c;
	i++;
	}
}
	while(i>=0)
	{
		printf("%c", aux[i-1]);
		i--;
	}
	fclose(file);
	return 0;
}
