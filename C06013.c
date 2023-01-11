#include<stdio.h>
#include<string.h>

char str[1000006] = "";
char a[11] = "0123456789";

void check(char str[], int count[]){
	int n = strlen(str);
	int i,j;
	for(i = 0; i < n; i++){
		if(str[0] == '0'){
			printf("INVALID\n");
			return;
		}
		if(str[i] < '0' || str[i] > '9'){
			printf("INVALID\n");
			return;
		}
		for(j = 0; j < 10; j++){
			if(str[i] == a[j]){
				count[j]++;
			}
		}
	}
	int dem = 0;
	for(i = 0; i < 10; i++){
		if(count[i] != 0){
			dem++;
		}
	}
	if(dem == 0){
		printf("INVALID\n");
	}
	else if(dem == 10){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%s", str);
		int count[100006] = {0};
		check(str, count);
	}
}