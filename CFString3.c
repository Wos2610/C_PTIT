#include<stdio.h>
#include<string.h>
#include<ctype.h>
char str[1000006];
int count[1000006] = {0};
 
void dem(char str[]){
	int n = strlen(str);
	int i;
	for(i = 0; i < n; i++){
		if(str[i] == str[i + 1]){
			count[str[i]- 'a']++;
		}
		else{
			printf("%c", str[i]);
			printf("%d", count[str[i] - 'a'] + 1);
			count[str[i] - 'a'] = 0;
		}
	}
}
int main(){
	scanf("%s", str);
	int n = strlen(str);
	int i;
	for(i = 0; i < n; i++){
		str[i] = tolower(str[i]);
	}
	dem(str);
	return 0;
}