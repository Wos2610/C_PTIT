#include<stdio.h>
#include<string.h>

char str[100] = "";
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("\n");
		gets(str);
		int n = strlen(str);
		int i;
		int count = 0;
		for(i = 0; i < n / 2; i++){
			if(str[i] != str[n - i - 1]){
				count++;
			}
		}
		if(n % 2 == 0){
			if(count == 1){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else{
			if(count == 0 || count == 1){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
}