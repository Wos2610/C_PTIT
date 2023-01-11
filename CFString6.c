#include<stdio.h>
#include<string.h>

char str[1000006];

void kTra(char str[]){
	int l = 0;
	int r = strlen(str) - 1;
	while(r > l){
		if(str[l] != str[r]){
			printf("NO\n");
			return;
		}
		else{
			l++;
			r--;
		}
	}
	printf("YES\n");
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		gets(str);
		scanf("%s", str);
		kTra(str);
	}
	return 0;
}