#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char arre[50];
	int i;
	FILE *archivo;
	
	archivo=fopen("arre.txt", "a");
	
	printf("teclea una cadena \n");
	gets(arre);
	
	for(i=0;i<strlen(arre);i++){
		if(i==0){
			arre[i]=toupper(arre[i]);
		}
		if(arre[i]==' '){
			arre[i]='-';
			arre[i+1]=toupper(arre[i+1]);
		}
	}
	printf("\n%s", arre);
	fprintf(archivo, "\n%s", arre);
	
	fclose(archivo);
	
	return 0;
}
