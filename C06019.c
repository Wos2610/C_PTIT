#include<stdio.h>
#include<string.h>

char str[1000006] = "";
char email[1000006] = "";
char name[100] = "";

int main(){
	gets(str);
	int n = strlen(str);
	int i;
	int count = n;
	for(i = 0; i < n; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
	}
	for(i = n - 1; i >= 0; i--){
		if(str[i] == ' '){
			break;
		}
		else{
			count--;
				
		}
	}
	int index = 0;
	for(i = count; i < n; i++){
		name[index] = str[i]; 
		index++;
	}
	
	char* pch;
	pch = strtok(str, " ");
	while(pch != NULL){
		if(strcmp(pch, name) != 0){
			strncat(email, pch, 1);
		}
		pch = strtok(NULL, " ");
	}
	
	printf("%s%s@ptit.edu.vn", email, name);
	
	
}