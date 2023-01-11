#include<stdio.h>
#include<string.h>

char str[1000006] ;
int main(){
	scanf("%s", str);
	int n = strlen(str);
	long long sum = 0;
	int i,j;
	for(i = 0; i < n; i++){
		if(str[i] == 'I'){
			sum += 1;
		}
		else if(str[i] == 'V'){
			sum += 5;
		}
		else if(str[i] == 'X'){
			sum += 10;
		}
		else if(str[i] == 'L'){
			sum += 50;
		}
		else if(str[i] == 'C'){
			sum += 100;
		}
		else if(str[i] == 'D'){
			sum += 500;
		}
		else if(str[i] == 'M'){
			sum += 1000;
		}
	}
	for(i = 0; i < n - 1; i++){
		if(str[i] == 'I' && str[i + 1] == 'V'){
			sum -= 2;
		}
		else if(str[i] == 'I' && str[i + 1] == 'X'){
			sum -= 2;
		}
		else if(str[i] == 'X' && str[i + 1] == 'L'){
			sum -= 20;
		}
		else if(str[i] == 'X' && str[i + 1] == 'C'){
			sum -= 20;
		}
		else if(str[i] == 'C' && str[i + 1] == 'D'){
			sum -= 200;
		}
		else if(str[i] == 'C' && str[i + 1] == 'M'){
			sum -= 200;
		}
	}
	printf("%lld", sum);
}