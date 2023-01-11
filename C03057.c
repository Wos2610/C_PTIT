#include<stdio.h>
#include<string.h>
char num1[20] = "";
char num2[20] = "";

void sum(char num1[], char num2[]){
	int n1 = strlen(num1);
	int n2 = strlen(num2);
	int i;
	for(i = 0; i < n1; i++){
		if(num1[i] == '6'){
			num1[i] = '5';
		}
	}
	for(i = 0; i < n2; i++){
		if(num2[i] == '6'){
			num2[i] = '5';
		}
	}
	while(n1 > n2){
		num2 = '0' + num2;
	}
	while(n1 < n2){
		num1 = '0' + num1;
	}
	char ans[20] = "";
	int rem = 0;
	int tmp = 0;
	char x;
	for(i = n2 - 1; i >= 0; i--){
		tmp = num1[i] + num2[i] - '0' - '0' + rem;
		x = (char)(tmp % 10 + '0');        
		strcat(ans,x);
		rem = tmp / 10;
	}
	if(rem){
		x = (char)(rem + '0');
		strcat(ans, x);
	}
	printf("%s", ans);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%s", num1);
		scanf("%s", num2);
		sum(num1, num2);
	}
}