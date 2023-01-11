#include<stdio.h>
#include<string.h>
char str[100000];
char strcon[100000];

int sVuong(char str[]){
	int n = strlen(str);
	if(n % 2 != 0){
		return 0;
	}
	int i;
	for(i = 0; i < n/2; i++){
		strcon[i] = str[i];
	}
	for(i = n/2; i < n; i++){
		if(str[i] != strcon[i - n/2]){
			return 0;
		}
	}
	return 1;
	
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%s", str);
		if(sVuong(str) == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}