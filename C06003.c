#include<stdio.h>
#include<string.h>
char str[300];
void kTra(char str[]){
	int n = strlen(str);
	int count = 0;
	int i;
	for(i = 0; i < n - 1; i++){
		if((str[i] == ' ') && (str[i + 1] != ' ')){
			count++;
		}
	}
	if(str[0] != ' '){
		count++;
	}
	printf("%d\n", count);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		scanf("\n");
		gets(str);
		kTra(str);
		T--;
	}
	return 0;
}