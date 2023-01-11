#include<stdio.h>
#include<string.h>

char str[1000006] = "";

struct Word{
	char name[100006];
	int num ;
};

struct Word f[100];

int xH(char pch[], int index){
	int i;
	for(i = 0; i < index; i++){
		if(strcmp(pch, f[i].name) == 0){
			f[i].num++;
			return 1;
		}
	}
	return 0;
}

void erase(char str[]){
	int index = 0;
	char *pch;
	pch = strtok(str," ");
	while(pch != NULL){
		if( !xH(pch, index) ){
			strcpy(f[index].name, pch);
			f[index].num = 1;
			index++;
		}
		pch = strtok(NULL, " ");
	}
	
	int i;
	for(i = 0; i < index; i++){
		printf("%s", f[i].name);
		if(i != index - 1){
			printf(" ");
		}
	}
}

int main(){
	gets(str);	
	erase(str);
	return 0;
}