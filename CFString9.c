#include<stdio.h>
#include<string.h>
 
char author[1000000];
char para[1000000];
 
void kTra(char author[], char para[]){
	int count = 0;
	int index = 1;
	char *pch;
	pch = strtok(para," ");
	while(pch != NULL){
		int m = strcmp(pch, author);
		if(m == 0){
			count++;
			printf("%d ",index);
			index = index + strlen(pch) + 1;
		}
		else{
			index = index + strlen(pch) + 1;
		}
		pch = strtok(NULL, " ");
	}
	if(count == 0){
		printf("-1");
	}
	printf("\n");
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%s\n", author);
		gets(para);
		kTra(author, para);
	}
	return 0;
}