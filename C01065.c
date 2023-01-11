#include<stdio.h>
#include<string.h>

int prime[] = {2, 3, 5, 7};

int count[100] = {0};
void kTra(char str[]){
	int n = strlen(str);
	int index = -1;
	int i,j;
	for(i = 0; i < 4; i++){
		for(j = 0; j < n; j++){
			if(str[j] - 48 == prime[i]){
				if(count[prime[i]] == 0){
					printf("%d ", prime[i]);
					count[prime[i]] = 1;
				}
				else{
					count[prime[i]]++;
				}
			}
		}
		if(count[prime[i]] >= 1){
			printf("%d\n", count[prime[i]]);
		}
	}
}
int main(){
	char str[20];
	scanf("%s", str);
	kTra(str);
	return 0;
}