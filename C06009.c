#include<stdio.h>
#include<string.h>

int check(char a[]){
	if(a[7] > a[6] && a[8] > a[7] && a[10] > a[8] && a[11] > a[10]){
		return 1;
	}
	else if(a[7] == a[6] && a[8] == a[7] && a[11] == a[10]){
		return 1;
	}
	else if(a[7] == a[6] && a[8] == a[7] && a[11] == a[10]){
		return 1;
	}
	else{
		for(int i = 6; i <= 11; i++){
			if(i != 9){
				if(a[i] != '6' && a[i] != '8'){
					return 0;
				}
			}
		}
		return 1;	
	}
	return 0;
}
// 012345678901
// 29-T1 123.79 // n = 12
char str[1000006];

int main(){
	int T;
	scanf("%d\n", &T);
	while(T--){
		gets(str);
		if(check(str) == 1){
			printf("YES\n") ;
		}
		else{
			printf("NO\n") ;
		}
	}
	
}