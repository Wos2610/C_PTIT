#include<stdio.h>
#include<string.h>
char str[100000];
char str2[100000] ;

void sort(char str[]){
	int i,j;
	int n = strlen(str);
	int charCount[26] = {0};
	for(i = 0 ; i < n; i++){
		charCount[str[i] - 'A']++;
	}
	
	for(i = 0; i < 26; i++){
		for(j = 0; j < charCount[i]; j++){
			printf("%c", i + 'A');
		}
	}
}


int main(){
	
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%s", str);
	
		int n = strlen(str);
		int sum = 0;         
		int i;

		for(i = 0; i < n; i++){
			if(str[i] <= 57){
				sum += str[i] - '0';
			}
		}
		sort(str);
		printf("%d\n", sum);
	}
	
	return 0;
}