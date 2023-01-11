#include<stdio.h>
#include<string.h>

char str[1000006] = "";

void check(char str[]){
	char *pch;
	pch = strtok(str, " ");
	while(pch != NULL){
		int n = strlen(pch);
		if(pch[0] >= 'a' && pch[0] <= 'z'){
			pch[0] -= 32;
		}
		int i;
		for(i = 1; i < n; i++){
			if(pch[i] >= 'A' && pch[i] <= 'Z'){
				pch[i] += 32;
			}
		}
		printf("%s", pch);
		printf(" ");
		pch = strtok(NULL, " ");
	}
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