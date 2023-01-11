#include<stdio.h>
#include<string.h>

char str[1000006] = "";

struct Word{
	char data[100] ;
	int num ;
};

struct Word w[100];

int check(const char *pch, struct Word w[], int index){
	int i;
	for(i = 0; i < index; i++){
		if(strcmp(pch, w[i].data) == 0){
			w[i].num++;
			return 1;
		}
	}
	return 0;
}

void dem(char str[]){
	int i;
	char *pch;
	pch = strtok(str, " ");
	int index = 0;
	while(pch != NULL){
		if( !check(pch, w, index) ){
			strcpy(w[index].data, pch);
			w[index].num = 1;
			index++;
		}
		pch = strtok(NULL, " ");
	}
	
	for(i = 0; i < index; i++){
		printf("%s %d\n", w[i].data, w[i].num);
	}
}

int main(){
	gets(str);
	int n = strlen(str);
	int i;
	for(i = 0; i < n; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
	}
	dem(str);
	return 0;
}