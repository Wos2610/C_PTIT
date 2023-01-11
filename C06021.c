#include<stdio.h>
#include<string.h>

char str[1006];

int check(char str[]){
	int n = strlen(str);
	if(str[0] == '0'){
		return -1;
	}
	int countC = 0;
	int countL = 0;
	int d = 0;
	for(int i = 0; i < n; i++){
		if(str[i] == '0' || str[i] == '2' || str[i] == '4'|| str[i] == '6'|| str[i] == '8'){
			countC++;
			d++;
		}
		else if(str[i] == '1' || str[i] == '3' || str[i] == '5'|| str[i] == '7'|| str[i] == '9'){
			countL++;
			d++;
		}
		else{
			return -1;
		}
	}
	if(countC > countL && n % 2 == 0){
		return 1;
	}
	if(countL > countC && n % 2 != 0){
		return 1;
	}
	return 0;
}

int main(){
	int T;
	scanf("%d\n", &T);
	while(T--){
		scanf("%s", str);
		if(check(str) == 1){
			printf("YES\n") ;
		}
		else if(check(str) == 0){
			printf("NO\n") ;
		}
		else{
			printf("INVALID\n");
		}
	}
	
}
