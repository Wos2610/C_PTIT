#include<stdio.h>
#include<string.h>

char str[1000006] = "";

struct Word{
	char name[100006];
};

struct Word f[100];

void check(char str[]){
	int n = strlen(str);
	int index = 0;
	int i,j;
	char *pch;
	pch = strtok(str, " ");
	while(pch != NULL){
		strcpy(f[index].name, pch);
		index++;
		pch = strtok(NULL, " ");
	}
	
	char tmp0[100006] = "";
	strcpy(tmp0, f[0].name);
	int m0 = strlen(f[0].name);
	for(j = 0; j < m0; j++){
		if(tmp0[j] >= 'a' && tmp0[j] <= 'z'){
			tmp0[j] -= 32;
		}
	}
	
	for(i = 1; i < index; i++){
		char tmp[100006] = "";
		strcpy(tmp, f[i].name);
		int m = strlen(f[i].name);
		for(j = 0; j < m; j++){
			if(j == 0){
				if(tmp[j] >= 'a' && tmp[j] <= 'z'){
					tmp[j] -= 32;
				}
			}
			else{
				if(tmp[j] >= 'A' && tmp[j] <= 'Z'){
					tmp[j] += 32;
				}
			}
		}
		printf("%s", tmp);
		if(i != index - 1){
			printf(" ");
		}
	}
	printf(", %s", tmp0);
	printf("\n");
}
int main(){
	int T;
	scanf("%d", &T);
	scanf("\n");
	while(T--){
		gets(str);
		check(str);
	}
		
}