#include<stdio.h>
#include<math.h>
#include<string.h>

#define D 1000000007

// 123
char str[1000006] = "";
int cs[1000006] = {0};
long long tongXau(char str[]){
	int n = strlen(str);
	int i,j;
	long long sum = 0;
	int begin = 0;
	long long temp = 1;
	for(i = n - 1; i >= 0 ; i--){
		sum = ( sum + ((str[i] - '0') * temp * (i + 1)) % D ) % D;
		temp = ((temp * 10) % D + 1 ) % D;
	}
	return sum ;
}
int main(){
	gets(str);
	printf("%lld", tongXau(str));
	return 0;
}