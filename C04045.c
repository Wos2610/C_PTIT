#include<stdio.h>
#include<string.h>


int check(int a[], int n){
	int countC = 0;
	int countL = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			countC++;
		}
		else{
			countL++;
		}
	}
	if(n % 2 == 0 && countC > countL){
		return 1;
	}
	if(n % 2 != 0 && countC < countL){
		return 1;
	}
	return 0;
}

int main(){
	int T;
	scanf("%d\n", &T);
	
	while(T--){
		char c = ' ';
		int i = 0;
		int a[206] = {0};
		while(c != '\n'){
			scanf("%d", &a[i]);
			i++;
			c = getchar();
		}
		if(check(a, i)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}	
}
