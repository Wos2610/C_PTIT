#include<stdio.h>
#include<string.h>

char str[1000006] = "";
char word[1000006] = "";
char s[1000006] = "";

void erase(char str[], char word[]){
	int n1 = strlen(str);
	int n2 = strlen(word);
	
	char *pch;
	const char  space[2] = " ";
	pch = strtok(str," ");
	while(pch != NULL){
		if(strcmp(pch, word) != 0){
			strcat(s, pch);
			strcat(s, space);
		}
		else{
			strcat(s, space);
		}
		pch = strtok(NULL, " ");
	}
	printf("%s", s);
}

int main(){
	gets(str);
	scanf("\n");
	scanf("%s", word);	
	erase(str, word);
	return 0;
}